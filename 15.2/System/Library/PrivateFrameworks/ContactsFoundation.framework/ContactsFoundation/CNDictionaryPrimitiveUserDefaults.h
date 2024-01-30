@class NSString, NSMutableDictionary;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSMutableDictionary *_preferences;
}

@property (readonly) unsigned long long synchronizeCount;
@property (readonly) unsigned long long setupAutosyncCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (id)primitiveObjectForKey:(id)a0;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setupAutosync;
- (id)init;
- (BOOL)synchronize;

@end
