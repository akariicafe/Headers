@class LSApplicationProxy;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying>

@property (readonly, nonatomic) LSApplicationProxy *applicationProxy;

- (id)initWithApplicationProxy:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithApplicationProxy:(id)a0 associatedAccessories:(id)a1;

@end
