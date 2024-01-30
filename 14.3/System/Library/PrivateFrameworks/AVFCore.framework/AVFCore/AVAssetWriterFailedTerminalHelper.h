@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (id)initWithConfigurationState:(id)a0;
- (void)dealloc;
- (id)error;
- (void)setFinishWritingDelegate:(id)a0;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)flushSegment;
- (void)flush;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (void)finishWriting;

@end
