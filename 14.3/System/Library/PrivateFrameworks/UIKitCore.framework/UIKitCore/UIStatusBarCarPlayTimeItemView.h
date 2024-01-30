@class NSString;

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    NSString *_timeString;
}

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)neededSizeForImageSet:(id)a0;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (void).cxx_destruct;
- (id)_timeImageSet;
- (id)_timeImageSetForColor:(id)a0;
- (id)contentsImage;
- (long long)textStyle;

@end
