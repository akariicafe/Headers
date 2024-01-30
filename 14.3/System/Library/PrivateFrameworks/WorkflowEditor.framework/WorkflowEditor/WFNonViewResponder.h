@class UIResponder, NSString, UIView;
@protocol WFNonViewResponderDelegate;

@interface WFNonViewResponder : UIResponder <WFInputViewMutable>

@property (weak, nonatomic) id<WFNonViewResponderDelegate> delegate;
@property (weak, nonatomic) UIResponder *nextResponder;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;

@end
