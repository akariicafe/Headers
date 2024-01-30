@interface CRKCatalystNetworkPowerAssertion : NSObject <CATCancelable>

@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)dealloc;
- (void)cancel;

@end
