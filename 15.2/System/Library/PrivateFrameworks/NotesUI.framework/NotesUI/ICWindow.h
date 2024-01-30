@class NSString, ICViewControllerManager;

@interface ICWindow : UIWindow

@property (retain, nonatomic) NSString *windowIdentifier;
@property (retain, nonatomic) NSString *toolPickerIdentifier;
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager;

- (void).cxx_destruct;
- (BOOL)accessibilityElementsHidden;
- (id)initWithWindowScene:(id)a0;
- (id)ic_viewControllerManager;

@end
