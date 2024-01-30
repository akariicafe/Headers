@class NSMutableSet, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {
    NSMutableSet *_objectsFromPhone;
    NSMutableSet *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_objectUUIDToAssocatedObjectUUIDs;
}

- (id)init;
- (void).cxx_destruct;
- (void)addObjectFromPhone:(id)a0;
- (void)addObjectFromWatch:(id)a0;
- (void)addObjects:(id)a0 fromPhoneAppWithBundleIdentifier:(id)a1;
- (void)addObjectsFromPhone:(id)a0;
- (void)addObjectsFromWatch:(id)a0;
- (void)enumerateObjectAssociations:(id /* block */)a0;
- (id)objectsFromPhone;
- (id)objectsFromPhoneApps;
- (id)objectsFromWatch;
- (void)setAssociatedObjectUUIDs:(id)a0 forObjectUUID:(id)a1;

@end
