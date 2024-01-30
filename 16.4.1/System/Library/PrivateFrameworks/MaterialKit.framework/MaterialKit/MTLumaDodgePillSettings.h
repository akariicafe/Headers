@class MTLumaDodgePillStyleSettings;

@interface MTLumaDodgePillSettings : PTSettings

@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) double height;
@property (nonatomic) double edgeSpacing;
@property (nonatomic) double colorAddWhiteness;
@property (nonatomic) double brightLumaThreshold;
@property (nonatomic) double darkLumaThreshold;
@property (nonatomic) double initialLumaThreshold;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long cornerMask;
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *noneSettings;
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *thinSettings;
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *graySettings;
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *blackSettings;
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *whiteSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
