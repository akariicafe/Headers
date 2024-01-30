@interface CSMagSafeRingConfiguration : NSObject

@property (nonatomic) double ringDiameter;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPoint { double x; double y; } ringCenter;
@property (nonatomic) double splashRingDiameter;

+ (id)defaultConfiguration;
+ (id)auxiliaryConfiguration;
+ (id)staticConfiguration;
+ (double)staticScaleFactor;

- (id)initWithRingDiameter:(struct SBFScreenSpecificCGFloatValue { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; })a0 lineWidth:(struct SBFScreenSpecificCGFloatValue { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; })a1 splashRingDiamter:(struct SBFScreenSpecificCGFloatValue { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; })a2;

@end
