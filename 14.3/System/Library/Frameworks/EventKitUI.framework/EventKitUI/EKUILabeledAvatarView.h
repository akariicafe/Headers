@class UIViewController, CNContact, UILabel, CNAvatarView;

@interface EKUILabeledAvatarView : UIView

@property (retain) CNAvatarView *avatar;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property unsigned long long options;
@property (retain) CNContact *contact;
@property (weak) UIViewController *viewController;
@property (nonatomic) BOOL loadContactsAsynchronously;

+ (id)_createAvatarView;
+ (id)contactForAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
+ (id)contactForEmailAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
+ (id)contactForContact:(id)a0;
+ (id)contactForPhoneNumber:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
+ (id)sortedAvatarListFromParticipants:(id)a0;
+ (id)contactKeysToFetch;

- (void)setup;
- (void)updateAvatarViewWithAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
- (id)initWithIdentity:(id)a0 placement:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)init;
- (void)setUpTap;
- (id)initWithContact:(id)a0 placement:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithEmail:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3 placement:(unsigned long long)a4 options:(unsigned long long)a5;
- (void)updateWithAddress:(id)a0 fullName:(id)a1 firstName:(id)a2 lastName:(id)a3;
- (void).cxx_destruct;
- (void)didTap;
- (void)updateLabel;
- (void)updateWithContacts:(id)a0;
- (id)initWithPlacement:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)updateWithParticipant:(id)a0;

@end
