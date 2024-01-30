@class UIColor, UIVisualEffect, UIVisualEffectView, RowSeparatorView;

@interface EKUITableViewCell : UITableViewCell {
    UIVisualEffectView *_rowSeparatorParentView;
    RowSeparatorView *_separatorViewForNonOpaqueTables;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (retain, nonatomic) UIColor *rowSeparatorColor;
@property (retain, nonatomic) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) BOOL usesInsetMargin;

+ (BOOL)vibrant;
+ (id)reuseIdentifier;
+ (double)rowSeparatorThickness;

- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(BOOL)a0;
- (void)layoutSubviews;

@end
