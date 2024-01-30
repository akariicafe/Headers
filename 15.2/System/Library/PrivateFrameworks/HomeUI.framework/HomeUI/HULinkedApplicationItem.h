@class NSSet, NSString;

@interface HULinkedApplicationItem : HFItem

@property (retain, nonatomic) NSSet *associatedAccessories;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (int)_iconVariantForScale:(double)a0;
- (id)_failedUpdateOutcome;

@end
