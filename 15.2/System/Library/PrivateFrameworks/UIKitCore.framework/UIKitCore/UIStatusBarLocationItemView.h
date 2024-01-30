@interface UIStatusBarLocationItemView : UIStatusBarItemView {
    int _iconType;
}

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)_imageName;
- (id)accessibilityHUDRepresentation;

@end
