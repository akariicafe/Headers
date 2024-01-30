@class UILabel;

@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView {
    UILabel *_textLabel;
}

- (void)layoutSubviews;
- (long long)buttonType;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (id)_appBundleIdentifier;
- (double)neededSizeForImageSet:(id)a0;
- (void).cxx_destruct;

@end
