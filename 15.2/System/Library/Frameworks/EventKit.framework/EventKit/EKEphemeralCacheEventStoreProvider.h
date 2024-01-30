@class NSString, EKTimedEventStorePurger;

@interface EKEphemeralCacheEventStoreProvider : NSObject <EKEventStoreProvider> {
    EKTimedEventStorePurger *_eventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCreationBlock:(id /* block */)a0;
- (id)eventStore;
- (void).cxx_destruct;

@end
