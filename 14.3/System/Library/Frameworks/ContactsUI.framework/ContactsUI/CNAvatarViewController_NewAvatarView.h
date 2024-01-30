@class CNContactStore, NSArray, _CNAvatarView, NSString, PRPersonaStore;
@protocol CNUIPRLikenessResolver;

@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController <_CNAvatarViewDelegate> {
    NSArray *_contacts;
}

@property (weak, nonatomic) _CNAvatarView *avatarView;
@property (retain, nonatomic) NSArray *likenessProviders;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) PRPersonaStore *personaStore;
@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultThreeDTouchSupport;

- (id)initWithSettings:(id)a0;
- (id)contacts;
- (void)setContacts:(id)a0;
- (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)loadView;

@end
