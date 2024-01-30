@interface WFIntentDynamicResolutionRequest : NSObject

@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
