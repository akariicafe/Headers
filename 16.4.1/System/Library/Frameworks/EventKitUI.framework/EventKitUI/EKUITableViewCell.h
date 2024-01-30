@class UIColor, UIVisualEffect, UIVisualEffectView, RowSeparatorView;

@interface EKUITableViewCell : UITableViewCell {
    UIVisualEffectView *_bottomRowSeparatorParentView;
    RowSeparatorView *_bottomSeparatorViewForNonOpaqueTables;
    UIVisualEffectView *_topRowSeparatorParentView;
    RowSeparatorView *_topSeparatorViewForNonOpaqueTables;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (nonatomic) BOOL disableSelectedBackground;
@property (retain, nonatomic) UIColor *rowSeparatorColor;
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) unsigned long long separatorEdges;
@property (nonatomic) BOOL usesInsetMargin;

+ (id)reuseIdentifier;
+ (BOOL)vibrant;
+ (double)rowSeparatorThickness;

- (id)separatorView;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateConfigurationUsingState:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(BOOL)a0;
- (id)separatorParentView;
- (void)updateRowSeparators;

@end
