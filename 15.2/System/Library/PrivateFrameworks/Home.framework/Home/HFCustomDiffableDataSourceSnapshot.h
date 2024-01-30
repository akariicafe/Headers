@class NSArray;

@interface HFCustomDiffableDataSourceSnapshot : NSObject

@property (retain, nonatomic) NSArray *sections;

- (id)sectionIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)itemIdentifiers;
- (void).cxx_destruct;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;

@end
