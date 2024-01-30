@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    long long _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markAsFinished;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isReadyForMoreMediaData;
- (id)initWithConfigurationState:(id)a0 terminalStatus:(long long)a1;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)a0;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)a0;
- (long long)status;
- (void)stopRequestingMediaData;
- (void)markCurrentPassAsFinished;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)a0;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (id)initWithConfigurationState:(id)a0;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
