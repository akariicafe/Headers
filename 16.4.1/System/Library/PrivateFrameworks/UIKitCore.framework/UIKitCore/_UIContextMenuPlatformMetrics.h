@class UIColor, UIVisualEffect, NSDictionary;

@interface _UIContextMenuPlatformMetrics : NSObject <_UIVisualStyleProviding>

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } cellBackgroundInsets;
@property (copy, nonatomic) id /* block */ cellBackgroundProvider;
@property (copy, nonatomic) id /* block */ preDismissalHandler;
@property (copy, nonatomic) id /* block */ containerViewProvider;
@property (copy, nonatomic) id /* block */ convertPointBetweenViews;
@property (retain, nonatomic) UIVisualEffect *menuBackgroundEffect;
@property (retain, nonatomic) UIColor *menuBackgroundColor;
@property (retain, nonatomic) UIVisualEffect *menuHighlightBackgroundEffect;
@property (retain, nonatomic) UIColor *menuHighlightBackgroundColor;
@property (nonatomic) double menuCornerRadius;
@property (nonatomic) BOOL scaleSubmenusWhenStacked;
@property (retain, nonatomic) NSDictionary *submenuSeparatedOptions;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } stackedSubmenuOffset;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } leadingCascadedSubmenuOffset;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } trailingCascadedSubmenuOffset;
@property (retain, nonatomic) NSDictionary *accessorySeparatedOptions;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } baseAccessoryOffset;
@property (nonatomic) double itemSeparatorHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionInsets;
@property (retain, nonatomic) UIColor *sectionSeparatorColor;
@property (nonatomic) double sectionSeparatorHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionSeparatorInsets;

- (id)init;
- (void).cxx_destruct;

@end
