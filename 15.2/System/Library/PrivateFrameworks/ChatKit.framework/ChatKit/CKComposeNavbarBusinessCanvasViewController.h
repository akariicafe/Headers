@class NSString, CKLabel, CKAvatarPickerViewController, CKConversation;

@interface CKComposeNavbarBusinessCanvasViewController : CKComposeNavbarCanvasViewController <CKAvatarPickerViewControllerDelegate>

@property (retain, nonatomic) CKLabel *defaultLabel;
@property (retain, nonatomic) CKAvatarPickerViewController *avatarController;
@property (retain, nonatomic) CKConversation *cachedConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowAvatarView;
- (void)viewDidLayoutSubviews;
- (void)updateContentsForConversation:(id)a0;
- (void)_handleAddressBookPartialChange:(id)a0;
- (void)_updateBrandingForConversation:(id)a0;
- (void)_updateDefaultLabelForConversation:(id)a0;
- (void)_updateTitleForConversation:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (long long)navBarContext;
- (BOOL)hideChevron;
- (id)_titleItemViewForTraitCollection:(id)a0;
- (void)tappedAvatarPickerViewController;

@end
