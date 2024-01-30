@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTraitCollection:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
