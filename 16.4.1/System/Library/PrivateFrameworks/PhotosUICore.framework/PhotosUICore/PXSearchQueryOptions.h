@interface PXSearchQueryOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long curatedAssetLimit;
@property (nonatomic) BOOL wantsCuratedAssetsFetchResult;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) BOOL wantsLibraryChanges;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) BOOL wantsWordEmbeddings;
@property (nonatomic) unsigned long long libraryScope;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
