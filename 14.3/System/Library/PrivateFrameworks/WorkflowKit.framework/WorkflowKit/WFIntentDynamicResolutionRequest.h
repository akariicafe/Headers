@interface WFIntentDynamicResolutionRequest : NSObject

@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
