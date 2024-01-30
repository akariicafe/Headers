@class NSArray, NSURL, NSString;
@protocol PUPickerFilter;

@interface PUPickerConfiguration : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (readonly, nonatomic) long long preferredAssetRepresentationMode;
@property (readonly, nonatomic) long long selectionLimit;
@property (readonly, copy, nonatomic) id<PUPickerFilter> filter;
@property (readonly, copy, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) unsigned long long resultOptions;
@property (readonly, nonatomic) BOOL isValidConfiguration;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsUnlimitedMultipleSelection;
@property (readonly, nonatomic) BOOL allowsAssetData;
@property (readonly, nonatomic) BOOL allowsAssetIdentifiers;
@property (readonly, nonatomic) BOOL shouldRequestCurrentIfPossible;
@property (nonatomic) BOOL useMessagesLayout;
@property (nonatomic) BOOL showsFileSizePicker;
@property (nonatomic) BOOL requiresPickingConfirmation;
@property (copy, nonatomic) NSString *limitedLibraryClientIdentifier;
@property (nonatomic) struct { unsigned int val[8]; } limitedLibraryClientAuditToken;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPHPickerConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
