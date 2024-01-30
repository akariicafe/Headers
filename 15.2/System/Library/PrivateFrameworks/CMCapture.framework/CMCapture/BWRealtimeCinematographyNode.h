@class NSData, NSString, BWFigVideoCaptureDevice, PTGlobalStabilizationMetadataVersion1, PTGlobalVideoHeaderMetadataVersion1, PTGlobalVideoMetadata, NSDictionary, PTGlobalCinematographyMetadataVersion1, BWNodeOutput, PTCinematographyStream, PTGlobalRenderingMetadataVersion1;

@interface BWRealtimeCinematographyNode : BWNode <PTCinematographyStreamDelegate> {
    PTCinematographyStream *_cinematographyStream;
    NSDictionary *_latestDetections;
    BWNodeOutput *_detectedObjectsOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _pastFramesWereBrightEnough[30];
    int _pastFramesWereBrightEnoughPointer;
    BOOL _currentStateIsBrightEnough;
    float _alphaLowLight;
    int _luxLevelThreshold;
    int _alphaRampFrameCount;
    BOOL _hasAutoFocus;
    int _framesSinceAutoFocusUpdate;
    int _autoFocusUpdateFrameDelay;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFixedFocusRect;
    int focusMode;
    BOOL _hasSeenDepth;
    float _simulatedAperture;
    struct opaqueCMSampleBuffer { } *_previousSampleBuffer;
    PTGlobalCinematographyMetadataVersion1 *_globalCinematographyMetadata;
    PTGlobalRenderingMetadataVersion1 *_globalRenderingMetadata;
    PTGlobalStabilizationMetadataVersion1 *_globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadataVersion1 *_globalVideoHeaderMetadata;
    PTGlobalVideoMetadata *_globalMetadata;
    BOOL _globalsWereSet;
    long long _latestFocusDectionTrackID;
}

@property (readonly, nonatomic) BWNodeOutput *detectedObjectsOutput;
@property (nonatomic) float simulatedAperture;
@property (readonly, nonatomic) NSString *cinematographyModelVersionString;
@property (readonly, nonatomic) BWNodeOutput *movieFileOutput;
@property (readonly, nonatomic) BWNodeOutput *previewOutput;
@property (readonly, nonatomic) NSData *globalMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_emitMovieFileDropForPreviousSampleBuffer;
- (void)_updateGlobalMetadata:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateAlphaLowLightWithMetadata:(id)a0 imageSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)_updateAutoFocus:(id)a0;
- (void)_emitSampleBufferOnMetadataOutput:(struct opaqueCMSampleBuffer { } *)a0 cinematographyFrame:(id)a1;
- (id)initWithObjectMetadataIdentifiers:(id)a0 captureDevice:(id)a1 tuningParameters:(id)a2 videoDepthConfiguration:(id)a3;
- (void)cinematographyStream:(id)a0 prioritizeTrackWithId:(unsigned long long)a1;

@end
