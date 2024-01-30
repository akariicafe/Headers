@class PHAssetCollection, NSArray, NSOrderedSet, NSURL, PHPhotoLibrary, NSString, PUPickerGeneratedFilter;
@protocol PUPickerFilter, PLClientIdentification;

@interface PUPickerConfiguration : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (nonatomic) BOOL usesEmbeddedMessagesLayout;
@property (readonly, nonatomic) long long preferredAssetRepresentationMode;
@property (readonly, nonatomic) long long selection;
@property (readonly, nonatomic) long long selectionLimit;
@property (readonly, copy, nonatomic) id<PUPickerFilter> filter;
@property (readonly, copy, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) BOOL onlyReturnsIdentifiers;
@property (readonly, copy, nonatomic) NSOrderedSet *preselectedAssetIdentifiers;
@property (readonly, nonatomic) BOOL allowsContinuousSelection;
@property (readonly, nonatomic) BOOL isValidConfiguration;
@property (readonly, nonatomic) BOOL usesSelectionCoordinator;
@property (readonly, nonatomic) BOOL allowsUnlimitedMultipleSelection;
@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) BOOL allowsAssetData;
@property (readonly, nonatomic) BOOL allowsAssetIdentifiers;
@property (readonly, nonatomic) BOOL allowsContextMenuInteraction;
@property (readonly, nonatomic) BOOL allowsSwipeToSelect;
@property (readonly, nonatomic) BOOL canBeginSearch;
@property (readonly, nonatomic) BOOL shouldRequestCurrentIfPossible;
@property (readonly, nonatomic) PUPickerGeneratedFilter *generatedFilter;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSOrderedSet *preselectedAssetObjectIDs;
@property (nonatomic) BOOL allowsDownload;
@property (nonatomic) BOOL showsFileSizePicker;
@property (nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (copy, nonatomic) NSString *limitedLibraryClientIdentifier;
@property (retain, nonatomic) id<PLClientIdentification> pickerClientIdentification;
@property (nonatomic) BOOL usesMemoriesLayout;
@property (retain, nonatomic) PHAssetCollection *memoryAssetCollection;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPHPickerConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)legacy_overrideGeneratedFilter:(id)a0;

@end
