@class UIInputResponderController, NSString, UIView, UIResponder, UIViewController;

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {
    long long _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    UIInputResponderController *_inputResponderController;
    BOOL _dismissed;
}

@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)availableTextServices;
+ (BOOL)_canShowTextServiceForType:(long long)a0;
+ (BOOL)_canShowTextServices;
+ (BOOL)shouldPresentServiceInSameWindowAsView:(id)a0;
+ (id)textServiceSessionForType:(long long)a0;
+ (id)showServiceForType:(long long)a0 withContext:(id)a1;
+ (id)showServiceForText:(id)a0 type:(long long)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
+ (id)showServiceForText:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(long long)a2 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inView:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (long long)type;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)_endSession;
- (BOOL)isDisplaying;
- (void)sessionDidDismiss;
- (void)dismissTextServiceAnimated:(BOOL)a0;

@end
