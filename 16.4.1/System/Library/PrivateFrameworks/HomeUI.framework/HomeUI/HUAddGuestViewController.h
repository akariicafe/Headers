@class NSString, HUPinCodeDetailsViewController, UIBarButtonItem;
@protocol HUPresentationDelegate;

@interface HUAddGuestViewController : HUItemTableOBWelcomeController <HUPinCodeDetailsViewDelegate, HUPresentationDelegateHost>

@property (retain, nonatomic) HUPinCodeDetailsViewController *pinCodeDetailsController;
@property (retain, nonatomic) UIBarButtonItem *saveButtonItem;
@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

@end
