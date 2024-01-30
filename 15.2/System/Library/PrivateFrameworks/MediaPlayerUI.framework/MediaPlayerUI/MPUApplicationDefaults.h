@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPUApplicationDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_applicationIdentifier;
    NSDictionary *_defaultValues;
    unsigned long long _referenceCountForDefferringUpdates;
}

- (void)_setObject:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)dictionaryForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (void)removeValueForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)setDate:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)_defaultsDidChange;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)_defaultsDidChangeNotificationName;
- (id)_objectForKey:(id)a0 expectedTypeID:(unsigned long long)a1;
- (struct __CFString { } *)_defaultsDomain;
- (void)_applyUpdates;

@end
