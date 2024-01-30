@class NSArray, NSString;

@interface MusicKit_SoftLinking_MPModelLibraryRequest : MusicKit_SoftLinking_MPModelRequest

@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;
@property (copy, nonatomic) NSArray *itemSortDescriptors;
@property (copy, nonatomic) NSArray *sectionSortDescriptors;
@property (copy, nonatomic) NSString *itemFilterText;
@property (copy, nonatomic) NSString *sectionFilterText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) id underlyingRequest;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithLegacyModelObject:(id)a0 itemType:(long long)a1 properties:(id)a2 relationships:(id)a3;
- (id)initWithLegacyModelObjectType:(long long)a0 itemKind:(id)a1 allowedItemIdentifiers:(id)a2 itemSortDescriptors:(id)a3 itemFilterText:(id)a4 itemPropertyFilters:(id)a5 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a6 wantsDetailedKeepLocalRequestableResponse:(BOOL)a7 ignoreExplicitContentRestrictions:(BOOL)a8 includeOnlyDownloadedContent:(BOOL)a9 includeOnlyFavoritedContent:(BOOL)a10 includeNonLibraryAddedContent:(BOOL)a11 mediaLibrary:(id)a12;
- (id)initWithLegacyModelObjectType:(long long)a0 sectionLegacyModelObjectType:(long long)a1 itemKind:(id)a2 sectionKind:(id)a3 allowedItemIdentifiers:(id)a4 allowedSectionIdentifiers:(id)a5 scopedContainers:(id)a6 itemSortDescriptors:(id)a7 sectionSortDescriptors:(id)a8 itemFilterText:(id)a9 sectionFilterText:(id)a10 itemPropertyFilters:(id)a11 sectionPropertyFilters:(id)a12 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a13 wantsDetailedKeepLocalRequestableResponse:(BOOL)a14 ignoreExplicitContentRestrictions:(BOOL)a15 includeOnlyDownloadedContent:(BOOL)a16 includeOnlyFavoritedContent:(BOOL)a17 includeNonLibraryAddedContent:(BOOL)a18 mediaLibrary:(id)a19;

@end
