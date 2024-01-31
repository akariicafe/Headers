@class NSString, CNContact;
@protocol CNSNaPSuggestionsGalleryViewControllerDelegate;

@interface CNSNaPSuggestionsGalleryViewController : UIViewController <ContactsUI.CNWallpaperSuggestionsGalleryDelegate>

@property (nonatomic) long long mode;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL isEditingSNaP;
@property (nonatomic) BOOL isOnboarding;
@property (retain, nonatomic) NSString *photoLibraryAssetID;
@property (weak, nonatomic) id<CNSNaPSuggestionsGalleryViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (id)initWithMode:(long long)a0 contact:(id)a1 isEditingSNaP:(BOOL)a2 isOnboarding:(BOOL)a3;
- (id)initWithMode:(long long)a0 contact:(id)a1 isEditingSNaP:(BOOL)a2 isOnboarding:(BOOL)a3 photoLibraryAssetID:(id)a4;
- (void)skipStep;
- (long long)sourceTypeFromString:(id)a0;
- (void)suggestionsGalleryDidCancel;
- (void)suggestionsGalleryDidFinishWithPosterConfiguration:(id)a0 posterType:(id)a1 withGivenName:(id)a2 familyName:(id)a3;
- (void)suggestionsGalleryDidSelectAvatarSourceType:(id)a0 withGivenName:(id)a1 familyName:(id)a2;
- (void)suggestionsGalleryDidSelectSuggestedAvatar:(id)a0 withGivenName:(id)a1 familyName:(id)a2;

@end
