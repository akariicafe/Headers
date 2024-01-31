@class NSString, NSMutableDictionary;

@interface CNNicknameProviderTestDouble : NSObject <CNNicknameProvider>

@property (retain, nonatomic) NSMutableDictionary *filePathsForContacts;
@property (retain, nonatomic) NSMutableDictionary *contactForNickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setPersonalNicknameWithContact:(id)a0;
- (unsigned long long)sharingAudience;
- (BOOL)accountCanCreateSNaP;
- (id)avatarImageFileURLForNickname:(id)a0;
- (void)fetchPersonalNicknameAsContactWithCompletion:(id /* block */)a0;
- (BOOL)isNicknameSharingEnabled;
- (void)setPersonalNicknameWithSharingResult:(id)a0;
- (void)setSharingAudience:(unsigned long long)a0;
- (void)setSharingEnabled:(BOOL)a0;
- (void)addFilePath:(id)a0 forContact:(id)a1;
- (id)initWithFilePathsForContacts:(id)a0;
- (id)nicknameForContact:(id)a0;
- (id)sharedAvatarImageDataForContact:(id)a0;
- (id)sharedWallpaperForNickname:(id)a0;
- (id)sharedWatchWallpaperImageDataForNickname:(id)a0;
- (id)wallpaperFileURLForNickname:(id)a0;
- (id)watchWallpaperImageDataFileURLForNickname:(id)a0;

@end
