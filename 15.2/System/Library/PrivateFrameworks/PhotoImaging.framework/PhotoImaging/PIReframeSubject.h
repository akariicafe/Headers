@interface PIReframeSubject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long source;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandedBounds;
@property (nonatomic) long long edgeBleed;
@property (readonly, nonatomic) BOOL isHuman;
@property (readonly, nonatomic) BOOL isAnimal;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 source:(long long)a1 identifier:(long long)a2 confidence:(double)a3;

@end
