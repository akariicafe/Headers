@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)emphasisProperties;
+ (id)nullStyleName;
+ (id)nonEmphasisCharacterProperties;
+ (id)nullStyleWithContext:(id)a0;

- (int)writingDirection;
- (BOOL)transformsFontSizes;

@end
