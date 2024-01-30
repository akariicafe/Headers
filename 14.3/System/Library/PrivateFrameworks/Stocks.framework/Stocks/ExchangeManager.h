@class NSMutableDictionary;

@interface ExchangeManager : NSObject {
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)saveChanges;
- (id)exchangeWithName:(id)a0 createIfNotFound:(BOOL)a1;
- (void)_loadExchangesFromDefaults;
- (void)addExchange:(id)a0;
- (id)exchangeWithName:(id)a0;
- (void)_addExchange:(id)a0;
- (id)exchangeList;
- (BOOL)containsExchange:(id)a0;
- (void)removeExchange:(id)a0;
- (void)reloadExchangesFromDefaults;

@end
