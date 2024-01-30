@class NSString, EKTimedEventStorePurger;

@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider> {
    EKTimedEventStorePurger *_eventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCreationBlock:(id /* block */)a0;
- (id)eventStore;

@end
