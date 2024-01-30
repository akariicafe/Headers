@class UIColor, ARUICelebration;

@interface ARUIRing : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *topColor;
@property (retain, nonatomic) UIColor *bottomColor;
@property (nonatomic) float diameter;
@property (nonatomic) float thickness;
@property (nonatomic) float percentage;
@property (nonatomic) float opacity;
@property (nonatomic) float emptyOpacity;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float scale;
@property (nonatomic) float zRotation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (retain, nonatomic) ARUICelebration *celebration;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ topColorVector;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ topColorPremultipliedVector;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ bottomColorVector;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ bottomColorPremultipliedVector;

+ (id)randomRing;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_updatePremultipliedTopColor;
- (void)_updatePremultipliedBottomColor;
- (id)initWithRing:(id)a0;

@end
