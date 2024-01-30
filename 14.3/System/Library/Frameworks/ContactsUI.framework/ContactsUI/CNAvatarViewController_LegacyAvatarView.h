@class CNContactStore, NSString, NSArray, PRPersonaStore, CNAvatarView;
@protocol CNUILikenessRendering, NSObject, CNSchedulerProvider, CNAvatarViewControllerDelegate;

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {
    NSArray *_contacts;
}

@property (weak, nonatomic) CNAvatarView *avatarView;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) PRPersonaStore *personaStore;
@property (readonly, nonatomic) id<CNUILikenessRendering> imageRenderer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (weak, nonatomic) id<NSObject, CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (id)contacts;
- (void)setContacts:(id)a0;
- (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)loadView;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)didUpdateContentForAvatarView:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
