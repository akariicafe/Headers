@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (unsigned long long)type;
- (void)setupSubscription;
- (id)requestIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (int)getRequestState;

@end
