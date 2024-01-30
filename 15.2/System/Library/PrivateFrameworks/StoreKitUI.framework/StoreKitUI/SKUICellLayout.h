@class SKUIClientContext, UIView;

@interface SKUICellLayout : NSObject {
    BOOL _parentWantsCellNeedsLayout;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, weak, nonatomic) UIView *parentCellView;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithTableViewCell:(id)a0;
- (void)resetLayout;
- (void)setNeedsLayout;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)a0;
- (id)initWithParentView:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (id)initWithCollectionViewCell:(id)a0;

@end
