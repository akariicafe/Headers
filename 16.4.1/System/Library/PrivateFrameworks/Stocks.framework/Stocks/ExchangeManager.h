@class NSMutableDictionary;

@interface ExchangeManager : NSObject {
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)saveChanges;
- (void)removeExchange:(id)a0;
- (void)_addExchange:(id)a0;
- (void)_loadExchangesFromDefaults;
- (void)addExchange:(id)a0;
- (BOOL)containsExchange:(id)a0;
- (id)exchangeList;
- (id)exchangeWithName:(id)a0;
- (id)exchangeWithName:(id)a0 createIfNotFound:(BOOL)a1;
- (void)reloadExchangesFromDefaults;

@end
