@class NSString;

@interface HULinkedApplicationInternalSideloadItem : HULinkedApplicationItem <NSCopying> {
    NSString *_bundleIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 associatedAccessories:(id)a1;

@end
