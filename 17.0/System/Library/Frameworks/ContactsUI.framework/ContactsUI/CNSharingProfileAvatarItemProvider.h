@class NSData, CNSharingProfileAvatarItem, NSArray, CNPhotoPickerVariantsManager, CNSharingProfileLogger, CNSharingProfileAvatarItemProviderConfiguration, CNContact, CNAvatarImageRenderer, CNPhotoPickerColorVariant, PRMonogramColor;
@protocol AVTAvatarRecord;

@interface CNSharingProfileAvatarItemProvider : NSObject

@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNAvatarImageRenderer *renderer;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL contactIsFromFullPhotoPicker;
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousAnimojiItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *previousPhotoItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *silhouetteItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *animojiItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *photoItem;
@property (retain, nonatomic) CNSharingProfileAvatarItem *monogramItem;
@property (nonatomic) BOOL useRTL;
@property (retain, nonatomic) CNPhotoPickerColorVariant *animojiColor;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (retain, nonatomic) NSData *memojiMetadata;
@property (nonatomic) BOOL shouldIncludeSilhouette;
@property (nonatomic) BOOL shouldIncludeAnimoji;
@property (nonatomic) BOOL shouldIncludePhoto;
@property (nonatomic) BOOL shouldIncludeMonogram;
@property (readonly, nonatomic) NSArray *avatarItems;
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *configuration;

+ (id)descriptorForRequiredKeys;
+ (id)animojiItemWithRecord:(id)a0 stickerConfiguration:(id)a1 backgroundColor:(id)a2;
+ (id)compositeImageForImage:(id)a0 backgroundImage:(id)a1;
+ (id)contactImageItemWithContact:(id)a0 renderer:(id)a1 logger:(id)a2 type:(long long)a3;
+ (id)monogramImageItemWithContact:(id)a0 monogramColor:(id)a1 renderer:(id)a2 RTL:(BOOL)a3;
+ (id)originalAnimojiImageForRecord:(id)a0 stickerConfiguration:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)silhouetteImageItemWithRenderer:(id)a0;
+ (id)unposedImageForAvatarRecord:(id)a0;

- (void).cxx_destruct;
- (id)animojColor;
- (void)buildItems;
- (void)clearCachedItems;
- (BOOL)contactHasImageOfPhotoType:(id)a0;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1 logger:(id)a2;
- (void)pickRandomColors;
- (void)updateWithContact:(id)a0 fromFullPhotoPicker:(BOOL)a1;

@end
