@class LSApplicationProxy;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying>

@property (readonly, nonatomic) LSApplicationProxy *applicationProxy;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (id)initWithApplicationProxy:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithApplicationProxy:(id)a0 associatedAccessories:(id)a1;

@end
