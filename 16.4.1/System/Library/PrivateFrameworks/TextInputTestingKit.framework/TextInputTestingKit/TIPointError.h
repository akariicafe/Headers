@interface TIPointError : NSObject <NSCoding>

@property (readonly, nonatomic) struct CGPoint { double x; double y; } errorVector;

+ (id)errorWithErrorVector:(struct CGPoint { double x0; double x1; })a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (struct CGPoint { double x0; double x1; })applyToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithErrorVector:(struct CGPoint { double x0; double x1; })a0;

@end
