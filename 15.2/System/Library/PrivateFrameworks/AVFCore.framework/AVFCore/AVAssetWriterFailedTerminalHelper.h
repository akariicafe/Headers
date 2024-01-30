@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError *_terminalError;
}

- (void)flush;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (void)flushSegment;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)error;
- (id)initWithConfigurationState:(id)a0;
- (void)dealloc;
- (void)setFinishWritingDelegate:(id)a0;
- (id)initWithConfigurationState:(id)a0 terminalError:(id)a1;
- (void)finishWriting;

@end
