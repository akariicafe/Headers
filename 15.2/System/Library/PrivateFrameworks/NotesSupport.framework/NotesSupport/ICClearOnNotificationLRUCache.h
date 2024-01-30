@protocol NSObject;

@interface ICClearOnNotificationLRUCache : ICAtomicLRUCache

@property (retain, nonatomic) id<NSObject> notificationToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMaxSize:(unsigned long long)a0 notificationName:(id)a1;

@end
