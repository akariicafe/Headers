@class NSString;

@interface FIMindfulnessAppMigrator : NSObject {
    NSString *_container;
}

- (void)_removeObjectForKey:(id)a0;
- (id)initWithContainer:(id)a0;
- (void)_synchronize;
- (void).cxx_destruct;
- (id)init;
- (long long)_integerForKey:(id)a0 exists:(BOOL *)a1;
- (void)_setInteger:(long long)a0 key:(id)a1;
- (void)migrateIfNeeded;

@end
