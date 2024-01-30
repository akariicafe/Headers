@class DOCConcreteLocation, NSArray, NSDictionary, NSString;

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *documentContentTypes;
@property (retain) NSArray *urls;
@property (retain) DOCConcreteLocation *defaultLocation;
@property unsigned long long interactionMode;
@property BOOL shouldIgnoreInteractionMode;
@property BOOL inProcess;
@property (copy, nonatomic) NSDictionary *allowedConversions;
@property (nonatomic) BOOL shouldConvert;
@property (copy, nonatomic) NSArray *excludedDocumentContentTypes;
@property (copy, nonatomic) NSArray *recentDocumentsContentTypes;
@property (copy, nonatomic) NSString *hostIdentifier;
@property (copy, nonatomic) NSString *hostBundleTitle;
@property (readonly) BOOL forBrowsingInApp;
@property BOOL forPickingDocuments;
@property BOOL forPickingFolders;
@property BOOL forMovingDocuments;
@property (readonly) BOOL forSavingDocuments;
@property (readonly) BOOL isPickerUI;
@property BOOL supportsRemovableFileProviders;
@property BOOL forPickingDownloadsFolder;
@property BOOL supportsRelatedFilesInPicker;
@property (nonatomic) BOOL isContentManaged;
@property BOOL neverCreateBookmarkForOpenInPlace;
@property BOOL pickingItemsShouldBumpLastOpenDate;
@property BOOL suppressBlackCallout;
@property BOOL preferLastUsedDate;
@property (readonly) BOOL isFilesApp;
@property (readonly) BOOL isPopover;
@property (readonly) BOOL isWidget;
@property (readonly) BOOL isPopoverOrWidget;
@property BOOL shouldOpenInApp;
@property (copy, nonatomic) NSArray *hiddenSourcesIdentifiers;
@property BOOL restoreLastVisitedLocation;
@property BOOL saveLastVisitedLocation;
@property BOOL collectionSupportsDragAndDrop;
@property long long maximumNumberOfItemsToFetch;
@property long long maximumNumberOfRows;
@property BOOL skipDownload;
@property BOOL presentingMakesCollectionFirstResponder;
@property BOOL showCollectionControls;
@property BOOL supportsColumnView;
@property BOOL supportsNavigationTitleMenus;
@property BOOL shouldAdjustContentInset;
@property BOOL useSharedQuickLook;
@property BOOL useExpandedSourceList;
@property unsigned long long browserViewContext;
@property (copy, nonatomic) NSString *roleIdentifier;
@property (copy, nonatomic) NSString *stateIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy) NSArray *forbiddenActionIdentifiers;
@property double thumbnailFetchingTimeOut;

+ (id)configurationForExportingDocumentsToURLs:(id)a0 mode:(unsigned long long)a1;
+ (id)configurationForFolderPicking;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)a0 mode:(unsigned long long)a1;
+ (id)configurationForImportingDocumentsWithConversionRules:(id)a0;
+ (id)configurationForImportingDocumentContentTypes:(id)a0 mode:(unsigned long long)a1;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)a0;
+ (id)pickableContentTypesFromAllowedConversions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionModeForPreparing;

@end
