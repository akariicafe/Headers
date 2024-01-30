@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;

- (void)layoutIfNeeded;
- (void)setNeedsDisplay;
- (BOOL)hitTestView:(id)a0;
- (void)addToTextField:(id)a0;
- (void)_buildDescription:(id)a0;
- (void)removeFromTextField;
- (id)overridingSetBackgroundColor:(id)a0;
- (void)didChangeFirstResponder;
- (void)populateArchivedSubviews:(id)a0;

@end
