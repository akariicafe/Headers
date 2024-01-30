@class CNContactStore, NSString, NSArray, CNAvatarView;
@protocol CNUILikenessRendering, NSObject, CNSchedulerProvider, CNAvatarViewControllerDelegate;

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {
    NSArray *_contacts;
}

@property (weak, nonatomic) CNAvatarView *avatarView;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNUILikenessRendering> imageRenderer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (weak, nonatomic) id<NSObject, CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewWithGroupIdentity:(id)a0;
- (id)contacts;
- (id)descriptorForRequiredKeys;
- (void)setContacts:(id)a0;
- (void)setAllowStaleRendering:(BOOL)a0;
- (void)didUpdateContentForAvatarView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithSettings:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
