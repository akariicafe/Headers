@class NSURL, ICAccount;

@interface ICAttachmentSystemPaperModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBoundsHint;
@property (nonatomic) BOOL hasDeepLink;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)paperBundleURLForAttachmentIdentifier:(id)a0 inAccount:(id)a1;

- (BOOL)shouldShowInContentInfoText;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)preferLocalPreviewImages;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (BOOL)showThumbnailInNoteList;
- (BOOL)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (id)additionalIndexableTextContentInNote;
- (id)searchableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (BOOL)restorePaperBundleFromArchiveURL:(id)a0;
- (id)archivePaperBundleToDisk;
- (id)archivePaperBundleDatabaseSubdirectoryToDisk;
- (BOOL)restorePaperBundleDatabaseSubdirectoryFromArchiveURL:(id)a0;
- (id)allPaperBundleAssetURLs;
- (BOOL)writePaperBundleAssetsFromURLs:(id)a0;

@end
