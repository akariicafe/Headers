@class SKNode;

@interface SKConstraint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enabled;
@property (retain, nonatomic) SKNode *referenceNode;

+ (id)scale:(id)a0;
+ (id)scaleX:(id)a0 scaleY:(id)a1;
+ (id)width:(id)a0;
+ (id)height:(id)a0;
+ (id)scaleX:(id)a0;
+ (id)scaleY:(id)a0;
+ (id)positionX:(id)a0;
+ (id)positionY:(id)a0;
+ (id)positionX:(id)a0 Y:(id)a1;
+ (id)distance:(id)a0 toNode:(id)a1;
+ (id)distance:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)distance:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 inNode:(id)a2;
+ (id)zRotation:(id)a0;
+ (id)orientToPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 offset:(id)a2;
+ (id)orientToNode:(id)a0 offset:(id)a1;
+ (id)orientToPoint:(struct CGPoint { double x0; double x1; })a0 offset:(id)a1;
+ (id)width:(id)a0 height:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToConstraint:(id)a0;

@end
