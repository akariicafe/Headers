@class IMMeCardSharingStateController, NSString, IMNicknameProvider;
@protocol CNNicknameProvider;

@interface CNNicknameProvider : NSObject <IMNicknameListener, CNNicknameProvider>

@property (class, readonly) id<CNNicknameProvider> defaultProvider;

@property (retain, nonatomic) IMMeCardSharingStateController *sharingStateController;
@property (retain, nonatomic) IMNicknameProvider *imNicknameProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)makeDefaultProvider;

- (id)init;
- (void).cxx_destruct;
- (void)setPersonalNicknameWithContact:(id)a0;
- (unsigned long long)sharingAudience;
- (id)avatarImageFileURLForNickname:(id)a0;
- (void)fetchPersonalNicknameAsContactWithCompletion:(id /* block */)a0;
- (BOOL)isNicknameSharingEnabled;
- (id)nicknameAsContactForContact:(id)a0;
- (void)setPersonalNicknameWithSharingResult:(id)a0;
- (void)setSharingAudience:(unsigned long long)a0;
- (void)setSharingEnabled:(BOOL)a0;
- (void)nicknameStoreDidChange:(id)a0;
- (id)avatarImageFileURLForContact:(id)a0;
- (id)contactFromNickname:(id)a0;
- (id)initWithIMNicknameProvider:(id)a0;
- (id)nicknameForContact:(id)a0;
- (id)sharedAvatarImageDataForContact:(id)a0;
- (id)sharedWallpaperForNickname:(id)a0;
- (id)sharedWatchWallpaperImageDataForNickname:(id)a0;
- (id)wallpaperFileURLForContact:(id)a0;
- (id)wallpaperFileURLForNickname:(id)a0;
- (id)watchWallpaperImageDataFileURLForContact:(id)a0;
- (id)watchWallpaperImageDataFileURLForNickname:(id)a0;

@end
