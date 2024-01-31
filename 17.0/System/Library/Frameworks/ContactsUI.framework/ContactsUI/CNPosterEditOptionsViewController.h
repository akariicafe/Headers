@class CNContact, _TtC10ContactsUI31CNPosterEditorViewConfiguration, CNContactImage, CNContactPoster;
@protocol CNPosterEditOptionsViewControllerDelegate;

@interface CNPosterEditOptionsViewController : UIViewController <ContactsUI.CNAvatarPosterPairCollectionViewControllerDelegate>

@property (nonatomic) long long mode;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContact *contactForSharedProfile;
@property (retain, nonatomic) CNContactImage *pendingAvatar;
@property (retain, nonatomic) CNContactPoster *pendingPoster;
@property (retain, nonatomic) _TtC10ContactsUI31CNPosterEditorViewConfiguration *configuration;
@property (weak, nonatomic) id<CNPosterEditOptionsViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)avatarPosterPairCollectionDidConfirmSelection;
- (void)avatarPosterPairCollectionDidEditPoster:(id)a0;
- (void)avatarPosterPairCollectionDidSelectCreateNew;
- (void)avatarPosterPairCollectionDidSelectEditAvatar:(id)a0;
- (void)avatarPosterPairCollectionDidSelectWithAvatar:(id)a0 poster:(id)a1 didChange:(BOOL)a2 isShared:(BOOL)a3;
- (void)avatarPosterPairCollectionDidTapDismiss;
- (id)initWithContact:(id)a0 mode:(long long)a1;
- (void)posterEditOptionsDidCancel;
- (void)posterEditOptionsDidTapDone;

@end
