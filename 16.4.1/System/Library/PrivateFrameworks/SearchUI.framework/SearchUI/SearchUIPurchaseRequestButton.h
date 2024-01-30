@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (void)setupSubscription;
- (id)requestIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (int)getRequestState;

@end
