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

- (id)contacts;
- (void)setContacts:(id)a0;
- (void)updateViewWithGroupIdentity:(id)a0;
- (id)descriptorForRequiredKeys;
- (void)setAllowStaleRendering:(BOOL)a0;
- (void)didUpdateContentForAvatarView:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)presentingViewControllerForAvatarView:(id)a0;

@end
