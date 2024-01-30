@protocol RTUserDefaults;

@interface RTDefaultsManager : RTService {
    id<RTUserDefaults> _userDefaults;
}

- (void)addDomain:(id)a0;
- (id)objectForKey:(id)a0;
- (void)shutdown;
- (id)init;
- (void)registerDefault:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)objectForKey:(id)a0 domain:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)initWithUserDefaults:(id)a0 customDomain:(id)a1;
- (void)notifyUpdatedKeys:(id)a0;
- (void)registerDefaults:(id)a0;

@end
