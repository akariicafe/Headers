@interface UIStatusBarElectronicTollCollectionItemView : UIStatusBarItemView {
    BOOL _available;
}

- (void)setVisible:(BOOL)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)alphaForAvailable:(BOOL)a0;
- (id)contentsImage;

@end
