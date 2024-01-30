@class UIColor, NSString, NSDictionary, PVEffect;

@interface TitleDefinition : NSObject <NSCopying>

@property (readonly, nonatomic) int titleGroup;
@property (readonly, nonatomic) int titleType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isGeneric) BOOL generic;
@property (readonly, nonatomic, getter=isMotion) BOOL motion;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *text2;
@property (retain, nonatomic) NSString *text3;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (nonatomic) int duration;
@property (nonatomic) int anchorTargetOffset;
@property (nonatomic) int anchorLocalOffset;
@property (nonatomic) int introFadeDuration;
@property (nonatomic) int outroFadeDuration;
@property (nonatomic, getter=isDurationExplicitlySet) BOOL durationExplicitlySet;
@property (nonatomic, getter=isAnchorTargetOffsetExplicitlySet) BOOL anchorTargetOffsetExplicitlySet;
@property (nonatomic, getter=isAnchorLocalOffsetExplicitlySet) BOOL anchorLocalOffsetExplicitlySet;
@property (retain, nonatomic) NSDictionary *extendedDefinition;
@property (nonatomic) BOOL audioEnabled;
@property (readonly, nonatomic) int animationOutDuration;
@property (readonly, nonatomic) int nominalOverallDuration;
@property (readonly, nonatomic) PVEffect *titleEffect;
@property (readonly, copy, nonatomic) NSString *titleEffectID;
@property (copy, nonatomic) NSDictionary *titleEffectSettings;
@property (nonatomic) BOOL temporarilyDisabled;

+ (id)objectFromPlist:(id)a0 inProject:(id)a1;
+ (int)titleGroupForTitleName:(id)a0;
+ (int)titleTypeForTitleName:(id)a0;
+ (id)displayNameForTitleName:(id)a0;
+ (id)effectIDForTitleName:(id)a0;
+ (id)titleStyleRootForTitleName:(id)a0;
+ (id)titleStyleDisplayNameForTitleName:(id)a0 themeID:(id)a1;
+ (id)titleDefinitionPlaceholderForTheme:(id)a0;
+ (id)titleNameFromTitleStyleRoot:(id)a0 titleType:(int)a1;

- (id)plistRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithTitleName:(id)a0;
- (void)updateWithTitleDefinition:(id)a0;

@end
