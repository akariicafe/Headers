@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;

- (void)layoutIfNeeded;
- (void)populateArchivedSubviews:(id)a0;
- (void)removeFromTextField;
- (void)addToTextField:(id)a0;
- (void)didChangeFirstResponder;
- (id)overridingSetBackgroundColor:(id)a0;
- (BOOL)hitTestView:(id)a0;
- (void)_buildDescription:(id)a0;
- (void)setNeedsDisplay;

@end
