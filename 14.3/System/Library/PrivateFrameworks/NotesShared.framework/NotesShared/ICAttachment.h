@class NSData, NSString, NSURL, ICMedia, ICNote, ICAttachmentLocation, NSSet, NSDate, NSDictionary, ICAttachmentModel, AVAsset;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable> {
    short _attachmentType;
    ICAttachmentModel *_attachmentModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) AVAsset *movie;
@property (nonatomic, getter=isSettingMergeableData) BOOL settingMergeableData;
@property (nonatomic) long long minimumSupportedNotesVersion;
@property (nonatomic) double sizeHeight;
@property (nonatomic) double sizeWidth;
@property (nonatomic) double originX;
@property (nonatomic) double originY;
@property (nonatomic) short orientation;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *typeUTI;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *userTitle;
@property (retain, nonatomic) NSString *additionalIndexableText;
@property (retain, nonatomic) ICAttachmentLocation *location;
@property (retain, nonatomic) ICMedia *media;
@property (retain, nonatomic) NSData *mergeableData;
@property (nonatomic) BOOL needsInitialRelationshipSetup;
@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICNote *noteUsingTitleForNoteTitle;
@property (retain, nonatomic) NSSet *previewImages;
@property (retain, nonatomic) NSDate *previewUpdateDate;
@property (retain, nonatomic) ICAttachment *parentAttachment;
@property (readonly, nonatomic) ICAttachment *rootParentAttachment;
@property (retain, nonatomic) NSSet *subAttachments;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *remoteFileURLString;
@property (retain, nonatomic) NSURL *remoteFileURL;
@property (retain, nonatomic) NSData *metadataData;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) short section;
@property (nonatomic) BOOL checkedForLocation;
@property (nonatomic) BOOL hasMarkupData;
@property (retain, nonatomic) NSData *markupModelData;
@property (nonatomic) long long fileSize;
@property (nonatomic) double duration;
@property (nonatomic) short imageFilterType;
@property (nonatomic) double croppingQuadBottomLeftX;
@property (nonatomic) double croppingQuadBottomLeftY;
@property (nonatomic) double croppingQuadBottomRightX;
@property (nonatomic) double croppingQuadBottomRightY;
@property (nonatomic) double croppingQuadTopLeftX;
@property (nonatomic) double croppingQuadTopLeftY;
@property (nonatomic) double croppingQuadTopRightX;
@property (nonatomic) double croppingQuadTopRightY;
@property (readonly, nonatomic) BOOL hasCroppingQuad;
@property (retain, nonatomic) NSData *fallbackImageCryptoTag;
@property (retain, nonatomic) NSData *fallbackImageCryptoInitializationVector;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *handwritingSummary;
@property (nonatomic) short handwritingSummaryVersion;
@property (retain, nonatomic) NSString *imageClassificationSummary;
@property (nonatomic) short imageClassificationSummaryVersion;
@property (retain, nonatomic) NSString *ocrSummary;
@property (nonatomic) short ocrSummaryVersion;
@property (retain, nonatomic) NSString *fallbackTitle;
@property (retain, nonatomic) NSString *fallbackSubtitleIOS;
@property (retain, nonatomic) NSString *fallbackSubtitleMac;
@property (readonly, nonatomic) BOOL isReadOnly;

+ (void)initialize;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)attachmentWithIdentifier:(id)a0 includeDeleted:(BOOL)a1 context:(id)a2;
+ (id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)a0 inContext:(id)a1;
+ (id)predicateForPasswordProtected:(BOOL)a0;
+ (id)attachmentTypeUTIsToHideFromAttachmentBrowser;
+ (id)newFetchRequestForAttachments;
+ (void)purgeAllAttachmentsInContext:(id)a0;
+ (id)visibleAttachmentsInContext:(id)a0;
+ (id)predicateForAttachmentBrowserWithContext:(id)a0;
+ (id)predicateForInlineDrawing;
+ (id)notDeletedPredicate;
+ (id)internalImageCache;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (unsigned long long)countOfAttachmentsMatchingPredicate:(id)a0 context:(id)a1;
+ (id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)a0;
+ (id)fallbackImageDirectoryURL;
+ (id)predicateForSearchableAttachmentsInContext:(id)a0;
+ (id)predicateForVisibleObjects;
+ (id)newAttachmentWithIdentifier:(id)a0 note:(id)a1;
+ (id)filenameExtensionForUTI:(id)a0;
+ (id)filenameFromUTI:(id)a0;
+ (id)defaultTitleForAttachmentType:(short)a0;
+ (id)attachmentWithIdentifier:(id)a0 context:(id)a1;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)predicateForVisibleAttachmentsInContext:(id)a0;
+ (void)deleteAttachment:(id)a0;
+ (void)undeleteAttachment:(id)a0;
+ (id)attachmentIdentifiersForAccount:(id)a0;
+ (void)purgeAttachmentFilesForIdentifiers:(id)a0 account:(id)a1;
+ (BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)a0;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)noteFromAttachmentRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (void)ensureFallbackImageDirectoryExistsForAccount:(id)a0;
+ (id)mimeTypeFromUTI:(id)a0;
+ (id)fallbackImageURLForIdentifier:(id)a0 account:(id)a1;
+ (id)fallbackImageEncryptedURLForIdentifier:(id)a0 account:(id)a1;
+ (BOOL)typeUTIIsPlayableMovie:(id)a0;
+ (BOOL)typeUTIIsPlayableAudio:(id)a0;
+ (short)sectionFromTypeUTI:(id)a0 url:(id)a1;
+ (BOOL)typeUTIIsImage:(id)a0;
+ (BOOL)typeUTIIsDrawing:(id)a0;
+ (BOOL)typeUTIIsInlineDrawing:(id)a0;
+ (id)isBeingEditedLocallyOnDeviceSet;
+ (void)addPreviewImages:(id)a0 toRecord:(id)a1;
+ (void)purgeAttachment:(id)a0;
+ (id)allAttachmentsInContext:(id)a0;
+ (id)attachmentsMatchingPredicate:(id)a0 context:(id)a1;
+ (id)attachmentSectionSortOrder;
+ (BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)a0;

- (void)willSave;
- (id)urlString;
- (void)prepareForDeletion;
- (BOOL)isEncryptableKeyBinaryData:(id)a0;
- (id)mergeDecryptedValue:(id)a0 withOldValue:(id)a1 forKey:(id)a2;
- (id)summary;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)addLocationWithLatitude:(double)a0 longitude:(double)a1;
- (void)writeFallbackImageData:(id)a0;
- (void)loadPreviewArchive:(const struct PreviewImage { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; BOOL x6; BOOL x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x8; int x9; int x10; long long x11; } *)a0 previewDataIdentifier:(id)a1 dataPersister:(id)a2;
- (id)updateAttachmentPreviewImageWithImageData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 appearanceType:(unsigned long long)a3 scaleWhenDrawing:(BOOL)a4 metadata:(id)a5 sendNotification:(BOOL)a6;
- (id)markupModelData;
- (BOOL)hasAllMandatoryFields;
- (void)setUrlString:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)addLocationIfNeeded;
- (void)regenerateTitle;
- (void)updateAfterMediaChange;
- (id)drawingModel;
- (BOOL)hasFallbackImage;
- (void)savePreview:(id)a0 toArchive:(struct PreviewImage { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; BOOL x6; BOOL x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x8; int x9; int x10; long long x11; } *)a1 previewDataIdentifier:(id)a2 dataPersister:(id)a3;
- (void)setSummary:(id)a0;
- (BOOL)isURL;
- (BOOL)isMap;
- (BOOL)hasMetadata;
- (id)addMediaWithData:(id)a0 filename:(id)a1;
- (id)addMediaWithURL:(id)a0;
- (void)purgeAttachmentPreviewImages;
- (BOOL)checkPreviewImagesIntegrity;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 appearanceType:(unsigned long long)a2;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 appearanceType:(unsigned long long)a2 requireAppearance:(BOOL)a3;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 appearanceType:(unsigned long long)a2 matchScale:(BOOL)a3 matchAppearance:(BOOL)a4;
- (id)galleryModel;
- (id)inlineDrawingModel;
- (void)unmarkForDeletion;
- (id)recordZoneName;
- (void)markForDeletion;
- (void)dealloc;
- (BOOL)isiTunes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isChildOfDocumentGallery;
- (void)didTurnIntoFault;
- (id)updateAttachmentPreviewImageWithImageSrc:(struct CGImageSource { } *)a0 maxDimension:(double)a1 scale:(double)a2 appearanceType:(unsigned long long)a3 scaleWhenDrawing:(BOOL)a4 metadata:(id)a5 sendNotification:(BOOL)a6;
- (BOOL)isNews;
- (id)newlyCreatedRecordWithObfuscator:(id)a0;
- (id)ic_loggingValues;
- (id)userTitle;
- (BOOL)isTable;
- (id)userActivityContentAttributeSet;
- (BOOL)isMovable;
- (long long)visibilityTestingType;
- (unsigned long long)searchResultsSection;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (BOOL)isHiddenFromSearch;
- (id)authorsExcludingCurrentUser;
- (id)searchIndexingIdentifier;
- (id)searchableItemAttributeSet;
- (id)dataForTypeIdentifier:(id)a0;
- (id)fileURLForTypeIdentifier:(id)a0;
- (void)deleteFromLocalDatabase;
- (id)tableModel;
- (void)resetUniqueIdentifier;
- (void)setFallbackTitle:(id)a0;
- (void)setHandwritingSummary:(id)a0;
- (void)setImageClassificationSummary:(id)a0;
- (void)setOcrSummary:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeInNote;
- (id)parentCloudObject;
- (id)childCloudObjects;
- (id)childCloudObjectsForMinimumSupportedVersionPropagation;
- (void)setNote:(id)a0;
- (id)recordType;
- (id)addMediaWithFileWrapper:(id)a0;
- (void)updatePlaceInLocationIfNeededHandler:(id /* block */)a0;
- (void)setTypeUTI:(id)a0;
- (id)searchableTextContentWithoutTitle;
- (id)fileSizeString;
- (id)addMediaWithURL:(id)a0 updateFileBasedAttributes:(BOOL)a1;
- (id)addMediaWithData:(id)a0 filename:(id)a1 updateFileBasedAttributes:(BOOL)a2;
- (id)contentIdentifier;
- (id)mergeableData;
- (id)imageCacheKey;
- (void)setTitle:(id)a0;
- (void)setParentAttachment:(id)a0;
- (void)setMergeableData:(id)a0;
- (void)saveMergeableDataIfNeeded;
- (unsigned long long)searchResultType;
- (BOOL)isVisible;
- (id)dataSourceIdentifier;
- (id)searchableTextContent;
- (BOOL)isUnsupported;
- (short)attachmentType;
- (void)loadFromArchive:(const struct Attachment { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[2]; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; float x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x10; struct Location *x11; struct Media *x12; struct RepeatedPtrField<topotext::PreviewImage> { void **x0; int x1; int x2; int x3; } x13; float x14; float x15; double x16; double x17; int x18; BOOL x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x20; long long x21; double x22; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x23; struct RepeatedPtrField<topotext::Attachment> { void **x0; int x1; int x2; int x3; } x24; long long x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x34; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x35; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x36; int x37; int x38; } *)a0 dataPersister:(id)a1 withIdentifierMap:(id)a2;
- (void)saveToArchive:(struct Attachment { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[2]; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x4; float x5; float x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x10; struct Location *x11; struct Media *x12; struct RepeatedPtrField<topotext::PreviewImage> { void **x0; int x1; int x2; int x3; } x13; float x14; float x15; double x16; double x17; int x18; BOOL x19; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x20; long long x21; double x22; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x23; struct RepeatedPtrField<topotext::Attachment> { void **x0; int x1; int x2; int x3; } x24; long long x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x34; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x35; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x36; int x37; int x38; } *)a0 dataPersister:(id)a1 stripImageMarkupMetadata:(BOOL)a2;
- (long long)intrinsicNotesVersion;
- (void)awakeFromFetch;
- (BOOL)isFolder;
- (void)recursivelyAddSubAttachments:(id)a0;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 newAttachment:(BOOL)a2;
- (id)parentAttachmentFromRecord:(id)a0 accountID:(id)a1 context:(id)a2;
- (id)handwritingSummary;
- (id)imageClassificationSummary;
- (id)ocrSummary;
- (BOOL)isInNoteTitleOrSnippet;
- (void)updatePreviewsFromRecord:(id)a0;
- (id)fallbackImageEncryptedURL;
- (id)fallbackImageURL;
- (void)setFallbackSubtitleIOS:(id)a0;
- (void)setFallbackSubtitleMac:(id)a0;
- (void)clearCachedImages;
- (void)saveAndClearDecryptedData;
- (BOOL)needsToBeRequested;
- (unsigned long long)approximateArchiveSizeIncludingPreviews:(BOOL)a0;
- (void)setOrientation:(short)a0;
- (id)additionalIndexableText;
- (id)fallbackImageData;
- (id)fallbackImageUTI;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)preferLocalPreviewImages;
- (void)invalidateAttachmentPreviewImages;
- (void)updateAttachmentSectionWithTypeUTI:(id)a0;
- (void)updateCombinedSummary;
- (void)setAdditionalIndexableText:(id)a0;
- (BOOL)isAppStore;
- (BOOL)supportsDeletionByTTL;
- (id)newlyCreatedRecord;
- (void)fixMarkedForDeletionForScannedDocuments;
- (id)fallbackSubtitleIOS;
- (id)fallbackSubtitleMac;
- (void)updateMarkedForDeletionStateAttachmentIsInNote:(BOOL)a0;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)a0 height:(double)a1 scale:(double)a2 appearanceType:(unsigned long long)a3 scaleWhenDrawing:(BOOL)a4 metadata:(id)a5;
- (BOOL)hasAnyPNGPreviewImageFiles;
- (BOOL)needsToBePushedToCloud;
- (id)attachmentModel;
- (BOOL)isBeingEditedLocallyOnDevice;
- (void)setIsBeingEditedLocallyOnDevice:(BOOL)a0;
- (void)accountWillChangeToAccount:(id)a0;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)setUserTitle:(id)a0;
- (void)setImageFilterType:(short)a0;
- (void)setMarkupModelData:(id)a0;
- (id)fallbackTitle;
- (BOOL)shouldSyncMinimumSupportedNotesVersion;
- (id)searchDomainIdentifier;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1;
- (void)fixBrokenReferences;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1;
- (void)updateParentReferenceIfNecessary;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;
- (id)defaultTitle;
- (BOOL)supportsQuickLook;
- (BOOL)isDrawing;
- (BOOL)supportsRenaming;
- (id)previewImageCacheKey;
- (BOOL)supportsSavingAttachmentToExternalFile;
- (BOOL)isLoadingFromCloud;
- (id)unsupportedAttachmentTitle;
- (id)unsupportedAttachmentSubtitle;
- (BOOL)shouldEmbedMarkupDataInMedia;
- (BOOL)locationNeedsUpdate;
- (void)deleteAttachmentPreviewImages;
- (void)undeleteAttachmentPreviewImages;
- (id)title;
- (void)attachmentDidChange;
- (id)previewItemTitle;
- (BOOL)isInICloudAccount;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)previewItemURL;
- (void)willTurnIntoFault;
- (id)parentEncryptableObject;
- (void)willRefresh:(BOOL)a0;
- (void)didRefresh:(BOOL)a0;

@end
