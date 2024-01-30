@class UILabel, UIImageView;

@interface SFSectionDisclosureButton : UIButton {
    UILabel *_labelWhenCollapsed;
    UILabel *_labelWhenExpanded;
    UIImageView *_imageView;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void)toggleExpanded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expanded:(BOOL)a1;
- (void)buttonShapesEnabledDidChange;
- (void)dealloc;
- (void)updateExpanded;

@end
