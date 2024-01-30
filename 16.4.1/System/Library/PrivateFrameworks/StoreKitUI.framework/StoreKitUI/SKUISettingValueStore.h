@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUISettingValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableDictionary *_originalValues;
    NSMutableDictionary *_modifiedValues;
}

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)commitChanges;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (BOOL)hasChanges;
- (id)valueForKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clearValueForKey:(id)a0;
- (void)discardChanges;
- (id)modifiedKeys;
- (id)originalValueForKey:(id)a0;
- (id)resolvedValueForKey:(id)a0;
- (void)setModifiedValue:(id)a0 forKey:(id)a1;
- (void)setOriginalValue:(id)a0 forKey:(id)a1;

@end
