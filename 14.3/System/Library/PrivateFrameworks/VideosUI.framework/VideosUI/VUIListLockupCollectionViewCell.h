@class VUIListLockupCollectionViewCellView, VUIListLockupCollectionViewCellLayout, IKViewElement;

@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *primaryButtonElement;
@property (retain, nonatomic) IKViewElement *secondaryButtonElement;
@property (retain, nonatomic) VUIListLockupCollectionViewCellView *listCellView;
@property (retain, nonatomic) VUIListLockupCollectionViewCellLayout *layout;
@property (copy, nonatomic) id /* block */ buttonSelectionHandler;

+ (id)configureWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
