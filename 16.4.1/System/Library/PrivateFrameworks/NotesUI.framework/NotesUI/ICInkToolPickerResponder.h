@protocol ICInkToolPickerResponderDelegate;

@interface ICInkToolPickerResponder : UIView

@property (weak, nonatomic) id<ICInkToolPickerResponderDelegate> delegate;
@property (nonatomic) BOOL preventFirstResponder;

- (id)inputAssistantItem;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
