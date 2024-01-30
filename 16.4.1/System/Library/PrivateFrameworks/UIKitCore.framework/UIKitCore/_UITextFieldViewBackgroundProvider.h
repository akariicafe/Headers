@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (readonly, nonatomic) UIView *backgroundView;

- (void)_buildDescription:(id)a0;
- (id)overridingSetBackgroundColor:(id)a0;
- (BOOL)hitTestView:(id)a0;
- (void)layoutIfNeeded;
- (void)removeFromTextField;
- (void)populateArchivedSubviews:(id)a0;
- (void)didChangeFirstResponder;
- (void)addToTextField:(id)a0;
- (void)setNeedsDisplay;

@end
