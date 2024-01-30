@class NSURL, NSString;

@interface VCFigAssetWriter : NSObject <VCMovieWriterProtocol> {
    struct OpaqueFigAssetWriter { } *_assetWriter;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    NSString *_transactionID;
    int _videoTrackID;
    int _localAudioTrackID;
    int _remoteAudioTrackID;
    int _metadataTrackID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillImageTime;
    BOOL _isVideoStarted;
    BOOL _isEndRTPTimestampSet;
    unsigned char _stillImageCameraStatusBit;
    BOOL _resize;
    struct __CVPixelBufferPool { } *_bufferPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct OpaqueVTCompressionSession { } *_compressionSession;
    unsigned int _codec;
}

@property unsigned int startRTPTimeStamp;
@property unsigned int endRTPTimeStamp;
@property (readonly) unsigned char writerMode;
@property (retain, nonatomic) NSURL *outputURL;

- (void)dealloc;
- (int)_setupWriter;
- (void)setStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 mediaType:(unsigned char)a1;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cameraStatus:(unsigned char)a1 mediaType:(unsigned char)a2;
- (struct OpaqueVTCompressionSession { } *)compressionSessionWithWidth:(unsigned int)a0 height:(unsigned int)a1;
- (int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)finishWritingWithHandler:(id /* block */)a0;
- (id)initWithOutputURL:(id)a0 transactionID:(id)a1 videoCodec:(unsigned int)a2;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)a0;
- (void)setStillImageTimeInternal;
- (void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)a0 resize:(BOOL)a1 videoVisibleWidth:(int)a2 height:(int)a3;
- (void)setupWriterWithMode:(unsigned char)a0;
- (BOOL)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 RTPtimeStamp:(unsigned int)a1 mediaType:(unsigned char)a2;
- (BOOL)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 RTPtimeStamp:(unsigned int)a1 mediaType:(unsigned char)a2;
- (int)trackIDForMediaType:(unsigned char)a0;
- (int)trackIDForWriterMode:(unsigned char)a0;
- (void)writeIdentifierMetadata:(id)a0;

@end
