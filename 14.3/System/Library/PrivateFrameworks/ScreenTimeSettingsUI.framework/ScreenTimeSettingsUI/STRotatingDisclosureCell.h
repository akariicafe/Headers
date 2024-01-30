@class UILongPressGestureRecognizer, NSString;

@interface STRotatingDisclosureCell : PSTableCell <UIGestureRecognizerDelegate>

@property (readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_userPressed:(id)a0;

@end
