@class UIView;

@interface _UITextFieldPasscodeBackgroundProvider : _UITextFieldSystemBackgroundProvider {
    UIView *_cutoutView;
}

- (void)layoutIfNeeded;
- (void).cxx_destruct;
- (id)_contentSnapshot;
- (void)addToTextField:(id)a0;
- (Class)systemBackgroundViewClass;

@end
