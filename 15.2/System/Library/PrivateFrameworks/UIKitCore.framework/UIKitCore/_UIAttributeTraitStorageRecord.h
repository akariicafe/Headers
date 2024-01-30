@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) id value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTraitCollection:(id)a0 value:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
