@class UIVisualEffect, NSString, UIFont, HUGridCellBackgroundDisplayOptions;

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>

@property (copy, nonatomic) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *secondaryVibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *iconVibrancyEffect;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double iconSize;
@property (nonatomic) long long iconContentMode;
@property (nonatomic) double cellInnerMargin;
@property (nonatomic) double cellCornerRadius;
@property (nonatomic) unsigned long long onStateBorderStyle;
@property (nonatomic) double cellScaleFactor;
@property (readonly, nonatomic) long long cellSizeSubclass;
@property (readonly, nonatomic) double gutter;
@property (nonatomic) unsigned long long contentColorStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCellSizeSubclass:(long long)a0;

@end
