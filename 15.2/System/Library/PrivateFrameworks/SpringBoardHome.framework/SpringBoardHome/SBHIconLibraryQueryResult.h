@class SBHIconLibraryQuery, NSSet, NSArray, SBHLocalizedIndexedCollationStrategy, NSDiffableDataSourceSnapshot, NSDictionary;

@interface SBHIconLibraryQueryResult : NSObject <NSCopying> {
    NSDictionary *_iconForItemIdentifier;
    unsigned long long _totalNumberOfItems;
    unsigned long long _queryResultIdx;
}

@property (retain, nonatomic) SBHLocalizedIndexedCollationStrategy *collationStrategy;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (readonly, nonatomic, getter=isNullQueryResult) BOOL nullQueryResult;
@property (readonly, nonatomic) SBHIconLibraryQuery *query;
@property (readonly, copy, nonatomic) NSSet *icons;
@property (readonly, nonatomic) unsigned long long sortMethodology;
@property (readonly, copy, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) unsigned long long totalNumberOfItems;

+ (void)_hydrateSnapshot:(id)a0 fromIcons:(id)a1 query:(id)a2 outCollationStrategy:(id *)a3 outIconForItemIdentifier:(id *)a4 outSortMethodology:(unsigned long long *)a5 sortComparator:(id /* block */)a6;
+ (id)nullQueryResults;

- (long long)indexOfSectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)a0;
- (id)indexPathForIcon:(id)a0;
- (id)iconAtIndexPath:(id)a0;
- (id)initWithQuery:(id)a0 icons:(id)a1 sortComparator:(id /* block */)a2;
- (id)initWithQuery:(id)a0 icons:(id)a1 snapshot:(id)a2 collationStrategy:(id)a3 iconForitemIdentifier:(id)a4 sortMethodology:(unsigned long long)a5;
- (BOOL)isEqualToQueryResult:(id)a0;
- (id)_firstExtantSectionWithCollationIndexGreaterThan:(long long)a0;
- (id)sectionIdentifierForIcon:(id)a0;
- (id)itemIdentifierForIcon:(id)a0;
- (id)sectionIdentifierAtIndex:(unsigned long long)a0;
- (id)iconForItemIdentifier:(id)a0;
- (id)titleForSectionIdentifier:(id)a0;
- (id)titleForSectionAtIndex:(long long)a0;
- (id)iconsForSectionAtIndex:(unsigned long long)a0;

@end
