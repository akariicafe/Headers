@interface PXSearchSettings : PXSettings

@property (nonatomic) BOOL alwaysTrySiriSearch;
@property (nonatomic) BOOL enableImplicitTokenization;
@property (nonatomic) BOOL implicitTokenizationUsePrefixMatch;
@property (nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;
@property (nonatomic) BOOL preventUnnecessaryImplicitTokenization;
@property (nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;
@property (nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;
@property (nonatomic) unsigned long long maxNumberOfSuggestionsToShow;
@property (nonatomic) unsigned long long maxNumberOfTopAssetColumns;
@property (nonatomic) unsigned long long maxNumberOfResultColumns;
@property (nonatomic) unsigned long long maxNumberOfTopAssetRows;
@property (nonatomic) unsigned long long standardNumberOfTopAssetRows;
@property (nonatomic) BOOL forceIndexingFooter;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
