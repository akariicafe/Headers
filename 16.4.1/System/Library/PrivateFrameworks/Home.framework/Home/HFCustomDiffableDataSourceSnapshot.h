@class NSArray;

@interface HFCustomDiffableDataSourceSnapshot : NSObject

@property (retain, nonatomic) NSArray *sections;

- (id)sectionIdentifiers;
- (id)itemIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
