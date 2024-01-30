@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)_descriptionClassName;

@end
