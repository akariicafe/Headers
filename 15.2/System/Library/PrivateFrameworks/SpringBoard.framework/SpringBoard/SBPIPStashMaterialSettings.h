@class NSString, UIColor;

@interface SBPIPStashMaterialSettings : PTSettings

@property (copy, nonatomic) NSString *chevronCompositingFilter;
@property (retain, nonatomic) UIColor *chevronTintColor;
@property (nonatomic) double darkTintAlpha;
@property (nonatomic) double lightTintAlpha;
@property (readonly, nonatomic) UIColor *darkTintColor;
@property (readonly, nonatomic) UIColor *lightTintColor;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
