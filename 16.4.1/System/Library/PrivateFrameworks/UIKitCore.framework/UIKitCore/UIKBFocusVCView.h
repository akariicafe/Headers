@interface UIKBFocusVCView : UIView

@property (nonatomic) BOOL isEligibleForFocusWithZeroAlpha;

- (id)preferredFocusedView;
- (BOOL)_isEligibleForFocusGivenAlpha;

@end
