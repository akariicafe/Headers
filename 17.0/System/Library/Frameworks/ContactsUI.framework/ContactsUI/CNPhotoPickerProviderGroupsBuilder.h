@class CNContactViewCache, CNUIContactsEnvironment, CNVisualIdentity;
@protocol AVTAvatarStore;

@interface CNPhotoPickerProviderGroupsBuilder : NSObject

@property (nonatomic) BOOL includeContactImage;
@property (nonatomic) BOOL includeUnifiedContactImages;
@property (nonatomic) BOOL includeTakePhotoItem;
@property (nonatomic) BOOL includePhotoFromLibraryItem;
@property (nonatomic) BOOL includeMonograms;
@property (nonatomic) BOOL includeFaces;
@property (nonatomic) BOOL includeAnimoji;
@property (nonatomic) BOOL includeAddAnimojiItem;
@property (nonatomic) BOOL includeRecents;
@property (nonatomic) BOOL shouldOrderEmojiBeforeAnimoji;
@property (nonatomic) BOOL includesEmojiContent;
@property (nonatomic) BOOL includeAddEmojiItem;
@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (readonly, nonatomic) id<AVTAvatarStore> avatarStore;
@property (readonly, nonatomic) CNContactViewCache *contactViewCache;
@property (readonly, nonatomic) CNUIContactsEnvironment *environment;
@property (readonly, nonatomic) BOOL includesAnyPhotoContent;

+ (id)builderWithVisualIdentity:(id)a0 avatarStore:(id)a1 environment:(id)a2 contactViewCache:(id)a3 photoPickerConfiguration:(id)a4;

- (id)build;
- (void).cxx_destruct;
- (id)addItemsContentGroup;
- (id)animojiContentGroup;
- (id)emojiContentGroup;
- (id)initWithVisualIdentity:(id)a0 avatarStore:(id)a1 environment:(id)a2 contactViewCache:(id)a3;
- (id)injectedItemsGroup;
- (id)photoContentGroup;

@end
