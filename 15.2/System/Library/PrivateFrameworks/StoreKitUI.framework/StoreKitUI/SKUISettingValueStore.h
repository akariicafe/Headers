@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUISettingValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableDictionary *_originalValues;
    NSMutableDictionary *_modifiedValues;
}

- (id)valueForUndefinedKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)hasChanges;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)commitChanges;
- (void).cxx_destruct;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (void)clearValueForKey:(id)a0;
- (void)discardChanges;
- (id)modifiedKeys;
- (id)originalValueForKey:(id)a0;
- (id)resolvedValueForKey:(id)a0;
- (void)setModifiedValue:(id)a0 forKey:(id)a1;
- (void)setOriginalValue:(id)a0 forKey:(id)a1;

@end
