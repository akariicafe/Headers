@class NSMutableDictionary;

@interface BLSHLocalCountingAssertionAttributeHandler : BLSHLocalAssertionAttributeHandler {
    NSMutableDictionary *_lock_entryDictionary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _countingDictionaryLock;
}

+ (Class)entryClass;
+ (id)attributeClasses;
+ (Class)attributeBaseClass;

- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;
- (id)initForService:(id)a0;
- (void).cxx_destruct;
- (id)countingTargetForEntry:(id)a0;
- (id)entriesForCountingTarget:(id)a0;

@end
