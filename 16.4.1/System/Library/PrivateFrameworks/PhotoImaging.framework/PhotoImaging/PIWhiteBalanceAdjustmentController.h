@class NSString;

@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *colorTypeKey;
@property (class, readonly, nonatomic) NSString *warmTempKey;
@property (class, readonly, nonatomic) NSString *warmTintKey;
@property (class, readonly, nonatomic) NSString *warmFaceKey;
@property (class, readonly, nonatomic) NSString *faceWarmthKey;
@property (class, readonly, nonatomic) NSString *grayWarmthKey;

@property (nonatomic) long long colorType;
@property (nonatomic) double faceStrength;
@property (nonatomic) double faceWarmth;
@property (nonatomic) double faceI;
@property (nonatomic) double faceQ;
@property (nonatomic) double grayStrength;
@property (nonatomic) double grayWarmth;
@property (nonatomic) double grayY;
@property (nonatomic) double grayI;
@property (nonatomic) double grayQ;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;
@property (nonatomic) double warmTemp;
@property (nonatomic) double warmTint;
@property (nonatomic) BOOL warmFace;

+ (id)faceStrengthKey;
+ (id)grayStrengthKey;
+ (id)tintKey;
+ (long long)colorTypeForString:(id)a0;
+ (id)faceIKey;
+ (id)faceQKey;
+ (id)grayIKey;
+ (id)grayQKey;
+ (id)grayYKey;
+ (id)stringForColorType:(long long)a0;
+ (id)temperatureKey;

- (BOOL)canHaveAuto;

@end
