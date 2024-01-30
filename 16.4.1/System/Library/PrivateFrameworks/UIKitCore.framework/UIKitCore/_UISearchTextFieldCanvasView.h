@class NSMutableSet;

@interface _UISearchTextFieldCanvasView : _UITextFieldCanvasView {
    NSMutableSet *_atomViews;
}

- (void)layoutSubviews;
- (void)_updateTokenViews;
- (void).cxx_destruct;
- (double)_uiatom_currentScreenScale;

@end
