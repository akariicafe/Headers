@class NSURL, NSString;
@protocol ARRecordingTechniqueProtocol;

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate>

@property unsigned long long state;
@property (retain, nonatomic) id<ARRecordingTechniqueProtocol> recordingTechnique;
@property (copy) id /* block */ finishBlock;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;

- (id)videoFormat;
- (void)startRecording;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initPrivate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setVideoFormat:(id)a0;
- (long long)worldAlignment;
- (void)abortRecording;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)finishRecordingWithHandler:(id /* block */)a0;
- (id)imageSensorSettings;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1;
- (id)initWithBaseConfiguration:(id)a0 recordingTechnique:(id)a1;
- (id)parentImageSensorSettings;
- (id)secondaryTechniques;
- (void)technique:(id)a0 didFinishWithResult:(id)a1;

@end
