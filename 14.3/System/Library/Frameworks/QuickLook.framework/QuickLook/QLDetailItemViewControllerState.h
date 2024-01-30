@class NSString, UIView;

@interface QLDetailItemViewControllerState : NSObject

@property (retain) NSString *actionButtonTitle;
@property (retain) UIView *actionButtonView;
@property (getter=isInformationVisible) BOOL informationVisible;

+ (id)detailItemViewControllerStateWithActionButtonTitle:(id)a0 actionButtonView:(id)a1 informationVisible:(BOOL)a2;

- (void).cxx_destruct;

@end
