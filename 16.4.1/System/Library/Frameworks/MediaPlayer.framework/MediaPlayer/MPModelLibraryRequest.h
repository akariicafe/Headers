@class NSArray, MPMediaLibrary, NSString, MPMediaQuery;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting>

@property (readonly, nonatomic) BOOL isUpgradedSmartPlaylistLegacyMediaQuery;
@property (readonly, nonatomic) MPMediaLibrary *_mediaLibrary;
@property (copy, nonatomic) NSArray *itemPropertyFilters;
@property (copy, nonatomic) NSArray *sectionPropertyFilters;
@property (copy, nonatomic) MPMediaQuery *legacyMediaQuery;
@property (nonatomic) BOOL disableImplicitSectioning;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (nonatomic) unsigned long long filteringOptions;
@property (copy, nonatomic) NSString *filterText;
@property (copy, nonatomic) NSString *sectionFilterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRange;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) BOOL sortUsingAllowedItemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)itemTranslationContext;
- (id)sectionTranslationContext;

@end
