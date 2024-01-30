@class NSArray, NSString, PLPhotoLibrary;

@interface PLWarningHelper : NSObject

@property (retain, nonatomic) NSArray *_assets;
@property (nonatomic) long long _duplicatePhotoStreamCount;
@property (nonatomic) long long _syndicationAssetCount;
@property (retain, nonatomic) NSString *_clientName;
@property (nonatomic) long long _style;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;

- (void)getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAlbums:(id)a3 folders:(id)a4 clientName:(id)a5 style:(long long)a6;
- (void)getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAssets:(id)a3 duplicatePhotoStreamCount:(long long)a4 syndicationAssetCount:(long long)a5 clientName:(id)a6 style:(long long)a7;
- (void)getWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAssets:(id)a3 operation:(long long)a4 clientName:(id)a5;
- (void)_getWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forItemSuffix:(id)a3 count:(unsigned long long)a4 operation:(long long)a5 clientName:(id)a6;
- (void)_getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2;
- (void)getExpungeWarningMessage:(id *)a0 buttonTitle:(id *)a1 forAssets:(id)a2;
- (void)getAvalancheDeleteWarning:(id *)a0 actualDeletionCount:(long long *)a1 forAssets:(id)a2;
- (void).cxx_destruct;
- (id)_cloudSharedWarningTextForAssets:(id)a0;
- (id)_usedElsewhereWarningTextForAssets:(id)a0 duplicatePhotoStreamCount:(long long)a1 actualDeletionCount:(long long)a2;
- (id)_usedElsewhereWarningTextForAssetCount:(long long)a0 inLibraryScopeCount:(long long)a1 inPhotoStreamCount:(long long)a2 iniPhotoCount:(long long)a3 inSomeAlbumCount:(long long)a4 affectedLocalAlbumsCount:(long long)a5 itemKindSuffix:(id)a6 actualDeletionCount:(long long)a7 syndicationAssetCount:(long long)a8;
- (id)allWarningMessageCombinations;
- (id)initWithPhotoLibrary:(id)a0;

@end
