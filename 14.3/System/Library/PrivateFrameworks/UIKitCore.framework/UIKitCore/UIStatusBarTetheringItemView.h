@interface UIStatusBarTetheringItemView : UIStatusBarItemView {
    int _tetheringConnectionCount;
}

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)contentsImage;

@end
