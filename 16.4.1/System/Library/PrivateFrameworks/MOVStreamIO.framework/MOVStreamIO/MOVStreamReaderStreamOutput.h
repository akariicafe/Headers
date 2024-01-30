@class NSData, Version, AVAssetReader, AVAssetTrack, NSString, AVAssetReaderTrackOutput, NSDictionary, MOVStreamReader, AVAssetReaderOutputMetadataAdaptor;
@protocol MOVStreamReaderDelegate, MOVStreamPostProcessor;

@interface MOVStreamReaderStreamOutput : NSObject <MOVStreamReaderStreamOutputPrivate, MOVStreamReaderVideoStreamOutputPrivate, MOVStreamReaderVideoStreamOutput, MOVStreamReaderAudioStreamOutput, MOVStreamReaderMetadataStreamOutput> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameDuration;
}

@property (retain) AVAssetReaderTrackOutput *streamOutput;
@property (retain) NSDictionary *metadataAdaptors;
@property (retain) AVAssetReaderOutputMetadataAdaptor *attachmentsAdaptor;
@property unsigned int originalPixelFormat;
@property unsigned int determinedPixelFormat;
@property int attachmentSerializationMode;
@property BOOL isLegacyIMUTrack;
@property (retain) NSData *futureAttachmentsData;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } futureAttachementsPts;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } futureAttachementsDuration;
@property (weak) Version *version;
@property (weak) id<MOVStreamReaderDelegate> delegate;
@property (weak) MOVStreamReader *reader;
@property (weak) AVAssetReader *assetReader;
@property (weak) AVAssetTrack *track;
@property (retain) NSString *streamId;
@property (weak) AVAssetTrack *assetTrack;
@property BOOL endOfStreamReached;
@property (retain) NSString *relatedStreamId;
@property (retain) NSString *relationSpecifier;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property unsigned long long trackTypeInfo;
@property long long mediaType;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) id<MOVStreamPostProcessor> postProcessor;

- (id)init;
- (void).cxx_destruct;
- (BOOL)alwaysCopiesSampleDataForStream;
- (id)attachmentsDataForStreamPts:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (struct __CVBuffer { } *)copyNextFrameForStreamTimestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 error:(out id *)a1;
- (id)customTrackMetadata;
- (id)decodeAttachmentsData:(id)a0 error:(id *)a1;
- (id)getAssociatedMetadataStreams;
- (id)getKeyFromMetadataTrack:(id)a0;
- (unsigned int)getOutputPixelFormatForStream;
- (struct opaqueCMSampleBuffer { } *)grabNextAudioSampleForStreamTimestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 error:(out id *)a1;
- (id)grabNextMetadataItemsOfTrackAssociatedWithStreamWithIdentifier:(in id)a0 timeRange:(out struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 error:(out id *)a2;
- (id)grabNextMetadataOfStreamTimeRange:(out struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 error:(out id *)a1;
- (struct opaqueCMSampleBuffer { } *)grabNextSampleBufferForStreamTimestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 error:(out id *)a1;
- (id)grabNextTimedMetadataGroupOfStreamError:(out id *)a0;
- (id)initWithAudioTrack:(id)a0 assetReader:(id)a1 associatedMetadataTracks:(id)a2 version:(id)a3 unknownStreamId:(id)a4 reader:(id)a5 delegate:(id)a6 error:(id *)a7;
- (id)initWithMetadataTrack:(id)a0 assetReader:(id)a1 version:(id)a2 unknownStreamId:(id)a3 reader:(id)a4 delegate:(id)a5 error:(id *)a6;
- (id)initWithSceneTrack:(id)a0 assetReader:(id)a1 associatedMetadataTracks:(id)a2 version:(id)a3 unknownStreamId:(id)a4 reader:(id)a5 delegate:(id)a6 error:(id *)a7;
- (id)initWithVideoTrack:(id)a0 assetReader:(id)a1 associatedMetadataTracks:(id)a2 version:(id)a3 unknownStreamId:(id)a4 reader:(id)a5 delegate:(id)a6 error:(id *)a7;
- (id)nextAttachmentWithError:(id *)a0;
- (struct __CVBuffer { } *)nextPixelBufferForStreamAttachementsData:(out id *)a0 timestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(out id *)a2;
- (struct opaqueCMSampleBuffer { } *)nextSampleBufferForStreamAttachementsData:(out id *)a0 timestamp:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(out id *)a2;
- (unsigned int)pixelFormatForStream;
- (int)playbackPixelFormatForTrack:(id)a0 ofStream:(id)a1 delegate:(id)a2;
- (int)playbackPixelFormatForTrack:(id)a0 ofStream:(id)a1 streamEncodingType:(id)a2 inputPixelFormat:(unsigned int)a3 delegate:(id)a4;
- (void)removePixelBufferPadding:(BOOL)a0;
- (id)streamIdFromTrackStreamTypeIdentifier:(id)a0;

@end
