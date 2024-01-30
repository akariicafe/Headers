@class NSSet;

@interface SBAlwaysOnPolicySettings : PTSettings

@property (nonatomic) BOOL semanticTypeCustom;
@property (nonatomic) BOOL semanticTypeDefault;
@property (nonatomic) BOOL semanticTypeSleep;
@property (nonatomic) BOOL semanticTypeDriving;
@property (nonatomic) BOOL semanticTypeExercise;
@property (nonatomic) BOOL semanticTypeWork;
@property (nonatomic) BOOL semanticTypePersonal;
@property (nonatomic) BOOL semanticTypeReading;
@property (nonatomic) BOOL semanticTypeGaming;
@property (nonatomic) BOOL semanticTypeMindfulness;
@property (nonatomic) long long focusStrategy;
@property (copy, nonatomic) NSSet *alwaysOnDisablingFocusSemanticTypes;

+ (id)settingsControllerModule;
+ (id)_keyPathForSemanticTypeName:(id)a0;

- (void)setDefaultValues;
- (void)setAlwaysOnDisablingFocusSemanticTypes:(id)a0;
- (id)alwaysOnDisablingFocusSemanticTypes;

@end
