@class NSMutableDictionary;

@interface RBBundlePropertiesBSXPCProvider : NSObject {
    NSMutableDictionary *_propertiesByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)removePropertiesForIdentifier:(id)a0;
- (id)propertiesForIdentifier:(id)a0;

@end
