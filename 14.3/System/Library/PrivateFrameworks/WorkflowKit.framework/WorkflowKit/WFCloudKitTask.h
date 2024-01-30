@interface WFCloudKitTask : NSObject

@property (getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void)cancel;
- (void).cxx_destruct;

@end
