@interface HUServiceDetailsSectionFactory : NSObject

@property (copy, nonatomic) id /* block */ customComparator;

- (void).cxx_destruct;
- (id /* block */)_serviceDetailsItemComparatorForSectionIdentifier:(id)a0;
- (id)buildServiceDetailsItemSectionForSourceItem:(id)a0 sectionIdentifier:(id)a1 items:(id)a2;

@end
