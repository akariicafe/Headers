@protocol ICInkToolPickerResponderDelegate;

@interface ICInkToolPickerResponder : UIView

@property (weak, nonatomic) id<ICInkToolPickerResponderDelegate> delegate;

- (id)inputAssistantItem;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;

@end
