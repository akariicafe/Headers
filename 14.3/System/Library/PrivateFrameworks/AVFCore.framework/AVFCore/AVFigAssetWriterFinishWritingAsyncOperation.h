@class NSString, AVAssetWriterFigAssetWriterNotificationHandler;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)isAsynchronous;
- (void)start;
- (void)didEnterTerminalState;

@end
