@class NSString;

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    NSString *_timeString;
}

- (long long)textStyle;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)neededSizeForImageSet:(id)a0;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_timeImageSet;
- (void).cxx_destruct;
- (id)_timeImageSetForColor:(id)a0;

@end
