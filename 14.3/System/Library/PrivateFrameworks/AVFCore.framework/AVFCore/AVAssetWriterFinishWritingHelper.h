@class NSOperation, NSArray;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation;

- (void)cancelWriting;
- (void)dealloc;
- (id)initWithConfigurationState:(id)a0 finishWritingOperations:(id)a1;
- (long long)status;
- (void)_finishWritingOperationsDidFinish;

@end
