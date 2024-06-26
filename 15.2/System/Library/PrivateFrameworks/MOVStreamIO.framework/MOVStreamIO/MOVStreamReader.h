@class NSString, AVAssetReader, AVURLAsset, NSMutableDictionary, NSMutableArray, Version;
@protocol MOVStreamReaderDelegate;

@interface MOVStreamReader : NSObject <MOVStreamReaderDeprecationNominates, MOVStreamReaderDeprecated, MOVStreamReaderEnhancedAccess> {
    AVURLAsset *m_asset;
    AVAssetReader *m_assetReader;
    NSMutableDictionary *_sampleStreams;
    NSMutableArray *_orderedVideoStreamIds;
    NSMutableArray *_orderedAudioStreamIds;
    NSMutableArray *_orderedSceneStreamIds;
    NSMutableDictionary *_metadataStreams;
    NSMutableArray *_orderedMetadataStreamIds;
    BOOL _l010OutputFormatRAW14L016;
    BOOL _rawBayerMSBReplication;
    Version *_movVersion;
}

@property BOOL rawBayerMSBReplication;
@property (weak) id<MOVStreamReaderDelegate> delegate;
@property BOOL l010OutputFormatRAW14L016;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)getAllStreams;
- (BOOL)containsMetadataStream:(id)a0;
- (id)getAllMetadataStreams;
- (BOOL)containsStream:(id)a0;
- (struct CGSize { double x0; double x1; })getSizeForStream:(id)a0;
- (BOOL)resetReaderTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (struct __CVBuffer { } *)copyNextFrameForStream:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForStream:(id)a0;
- (BOOL)hasReachedEndOfStream:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getMinFrameDurationForStream:(id)a0;
- (id)grabNextMetadataOfStream:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (id)metadataForMovie;
- (id)metadataTrackForStream:(id)a0;
- (double)getFrameRateForStream:(id)a0;
- (id)initWithURL:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)trackMetadataForMetadataStream:(id)a0;
- (id)grabNextMetadataOfStream:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 error:(id *)a2;
- (int)playbackPixelFormatForTrack:(id)a0 ofStream:(id)a1 delegate:(id)a2;
- (id)streamIdFromTrackStreamTypeIdentifier:(id)a0;
- (int)playbackPixelFormatForTrack:(id)a0 ofStream:(id)a1 streamEncodingType:(id)a2 inputPixelFormat:(unsigned int)a3 delegate:(id)a4;
- (void)movVersionCheck;
- (id)initWithContentsOfURL:(id)a0 delegate:(id)a1 error:(id *)a2;
- (void)clearOutputs;
- (id)findAllAssociatedMetadataTrackInAsset:(id)a0 forTrack:(id)a1;
- (void)registerOutput:(id)a0;
- (id)trackForStream:(id)a0;
- (BOOL)isTrack:(id)a0 byIdInTracks:(id)a1;
- (id)movstreamIOMetadataForMovie;
- (id)trackMetadataForStream:(id)a0;
- (id)getMetadataStreamsAssociatedTo:(id)a0 error:(id *)a1;
- (struct opaqueCMSampleBuffer { } *)grabNextSampleBufferForStream:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (id)getMetadataStreamsAssociatedTo:(id)a0;
- (id)getUnknownMetadataStreamsAssociatedTo:(id)a0;
- (unsigned int)pixelFormatForStream:(id)a0;
- (BOOL)resetReader:(id *)a0;
- (BOOL)endOfStream;
- (id)outputForVideoStream:(in id)a0 error:(out id *)a1;
- (id)outputForAudioStream:(in id)a0 error:(out id *)a1;
- (id)outputForSceneStream:(in id)a0 error:(out id *)a1;
- (id)outputForMetadataStream:(in id)a0 error:(out id *)a1;
- (struct opaqueCMSampleBuffer { } *)nextSampleBufferForStream:(in id)a0 attachementsData:(out id *)a1 timestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(out id *)a3;
- (struct __CVBuffer { } *)nextPixelBufferForStream:(in id)a0 attachementsData:(out id *)a1 timestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 error:(out id *)a3;
- (id)initWithContentsOfFile:(id)a0 delegate:(id)a1 error:(id *)a2;
- (BOOL)saveStream:(id)a0 toFile:(id)a1 error:(id *)a2;
- (id)getRelatedStreamForStreamId:(id)a0;
- (id)getRelationSpecifierForStreamId:(id)a0;
- (id)getStreamsRelatedToStream:(id)a0;
- (unsigned int)getOutputPixelFormatForStream:(id)a0;
- (unsigned long long)trackTypeInfoForStream:(id)a0;
- (void)removePixelBufferPadding:(BOOL)a0 forStream:(id)a1;
- (id)getAllAudioStreams;
- (id)getAllSceneStreams;
- (id)trackMetadataForAudioStream:(id)a0;
- (BOOL)containsAudioStream:(id)a0;
- (struct opaqueCMSampleBuffer { } *)grabNextAudioSampleForStream:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (id)grabNextMetadataItemsOfTrackAssociatedWith:(id)a0 withIdentifier:(id)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a2 error:(id *)a3;
- (id)nextAttachmentForStream:(id)a0 error:(id *)a1;
- (id)grabNextTimedMetadataGroupOfStream:(id)a0 error:(id *)a1;
- (BOOL)hasFinishedReading;
- (BOOL)hasReachedEndOfMetadataStream:(id)a0;

@end
