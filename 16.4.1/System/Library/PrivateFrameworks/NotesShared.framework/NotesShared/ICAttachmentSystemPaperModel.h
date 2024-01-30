@class NSURL, ICAccount;

@interface ICAttachmentSystemPaperModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBoundsHint;
@property (nonatomic) BOOL hasDeepLink;
@property (nonatomic) BOOL paperHasEnhancedCanvas;
@property (nonatomic) BOOL paperHasNewInks2022;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;
+ (id)paperBundleURLForAttachmentIdentifier:(id)a0 inAccount:(id)a1;

- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (void)updateMinimumSupportedVersionIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (id)additionalIndexableTextContentInNote;
- (id)archivePaperBundleToDiskWithError:(id *)a0;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (void)fixupMetadataAndMinimumSupportedNotesVersion;
- (BOOL)isIncludedInGenericAttachmentCount;
- (BOOL)preferLocalPreviewImages;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)providesStandaloneTitleForNote;
- (BOOL)restorePaperBundleFromArchiveURL:(id)a0 error:(id *)a1;
- (id)searchableTextContentInNote;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)standaloneTitleForNote;

@end
