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

- (void)setContacts:(id)a0;
- (id)descriptorForRequiredKeys;
- (id)contacts;
- (id)initWithSettings:(id)a0;
- (void)loadView;
- (void).cxx_destruct;

@end
