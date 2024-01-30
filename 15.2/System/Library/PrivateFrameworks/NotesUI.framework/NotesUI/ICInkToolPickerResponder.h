@protocol ICInkToolPickerResponderDelegate;

@interface ICInkToolPickerResponder : UIView

@property (weak, nonatomic) id<ICInkToolPickerResponderDelegate> delegate;
@property (nonatomic) BOOL preventFirstResponder;

- (id)inputAssistantItem;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;

@end
