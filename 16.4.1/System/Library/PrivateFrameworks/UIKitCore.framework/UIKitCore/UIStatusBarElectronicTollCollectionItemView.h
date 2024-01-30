@interface UIStatusBarElectronicTollCollectionItemView : UIStatusBarItemView {
    BOOL _available;
}

- (id)contentsImage;
- (void)setVisible:(BOOL)a0;
- (double)alphaForAvailable:(BOOL)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
