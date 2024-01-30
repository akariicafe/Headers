@interface OBPasscodeFieldDot : UIView

@property (nonatomic, getter=isFilled) BOOL filled;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_updateView;

@end
