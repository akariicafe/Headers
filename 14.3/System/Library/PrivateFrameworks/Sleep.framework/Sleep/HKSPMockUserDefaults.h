@class NSString, NSMutableDictionary;

@interface HKSPMockUserDefaults : NSObject <HKSPUserDefaults>

@property (readonly, nonatomic) NSMutableDictionary *defaults;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } defaultsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
