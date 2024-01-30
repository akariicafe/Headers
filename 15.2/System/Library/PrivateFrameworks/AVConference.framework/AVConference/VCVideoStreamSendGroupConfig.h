@class VCMoments;

@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig {
    int _captureSource;
}

@property (retain, nonatomic) VCMoments *moments;

- (void)dealloc;
- (int)captureSource;
- (void)setCaptureSource:(int)a0;

@end
