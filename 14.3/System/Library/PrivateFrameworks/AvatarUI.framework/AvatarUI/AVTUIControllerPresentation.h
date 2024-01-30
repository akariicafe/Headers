@class UIViewController, MSMessagesAppViewController;
@protocol AVTUIControllerPresentationDelegate;

@interface AVTUIControllerPresentation : NSObject

@property (class, retain, nonatomic) AVTUIControllerPresentation *pendingGlobalPresentation;

@property (readonly, nonatomic) UIViewController *controller;
@property (weak, nonatomic) MSMessagesAppViewController *modalMessagesController;
@property (weak, nonatomic) id<AVTUIControllerPresentationDelegate> delegate;

+ (id)presentationWithWrappingForController:(id)a0;

- (void).cxx_destruct;
- (void)viewWillBeObstructed;
- (id)initWithController:(id)a0;

@end
