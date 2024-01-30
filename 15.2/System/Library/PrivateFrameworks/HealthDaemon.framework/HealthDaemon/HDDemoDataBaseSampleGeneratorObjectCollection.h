@class NSMutableSet, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {
    NSMutableSet *_objectsFromPhone;
    NSMutableSet *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_objectUUIDToAssocatedObjectUUIDs;
}

- (void).cxx_destruct;
- (id)init;
- (void)addObjectFromPhone:(id)a0;
- (void)addObjectsFromPhone:(id)a0;
- (void)addObjectsFromWatch:(id)a0;
- (void)addObjectFromWatch:(id)a0;
- (void)addObjects:(id)a0 fromPhoneAppWithBundleIdentifier:(id)a1;
- (id)objectsFromPhone;
- (id)objectsFromWatch;
- (id)objectsFromPhoneApps;
- (void)setAssociatedObjectUUIDs:(id)a0 forObjectUUID:(id)a1;
- (void)enumerateObjectAssociations:(id /* block */)a0;

@end
