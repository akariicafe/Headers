@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode

@property (retain, nonatomic) SKTexture *velocityTexture;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)init;
- (void).cxx_destruct;
- (id)_descriptionClassName;

@end
