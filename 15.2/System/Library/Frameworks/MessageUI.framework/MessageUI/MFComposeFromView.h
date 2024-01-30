@class MFPopupButton, NSString, NSArray, EFFuture;
@protocol ECEmailAddressConvertible, MFComposeFromViewDelegate;

@interface MFComposeFromView : MFMailComposeHeaderView <MFPopupButtonDelegate>

@property (retain, nonatomic) MFPopupButton *popupButton;
@property (retain) EFFuture *iCloudPlusFuture;
@property (weak, nonatomic) id<MFComposeFromViewDelegate> delegate;
@property (copy, nonatomic) NSString<ECEmailAddressConvertible> *selectedAddress;
@property (retain, nonatomic) NSArray *availableAddresses;
@property (retain, nonatomic) NSArray *deferredAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)refreshPreferredContentSize;
- (id)menuForPopupButton:(id)a0;
- (void)popupButton:(id)a0 didSelectItem:(id)a1;
- (void)popupButtonWillPresentMenu:(id)a0 animator:(id)a1;
- (void)showLoadingState:(BOOL)a0;
- (void)setSelectedAddressToHME:(id)a0;

@end
