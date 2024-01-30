@class NSSet, NSString;

@interface HULinkedApplicationItem : HFItem

@property (retain, nonatomic) NSSet *associatedAccessories;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)na_identity;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)_failedUpdateOutcome;
- (int)_iconVariantForScale:(double)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
