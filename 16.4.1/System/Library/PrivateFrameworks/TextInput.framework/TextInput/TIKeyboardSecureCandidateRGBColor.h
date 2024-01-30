@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;

+ (id)lightGrayColor;
+ (id)whiteColor;
+ (id)blackColor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithR:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
- (id)description;

@end
