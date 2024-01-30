@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject {
    BOOL _parentWantsCellNeedsLayout;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, weak, nonatomic) UIView *parentCellView;

- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithTableViewCell:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithParentView:(id)a0;
- (void)resetLayout;
- (void)setHighlighted:(BOOL)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (id)initWithCollectionViewCell:(id)a0;

@end
