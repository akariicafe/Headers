@protocol CRKCancelable;

@interface CRKCancelableBackedCatalystIDSSubscription : NSObject <CATIDSSubscription>

@property (readonly, nonatomic) id<CRKCancelable> cancelable;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCancelable:(id)a0;

@end
