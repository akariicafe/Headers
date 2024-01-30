@interface HKDataMetadataSection : NSObject <HKDataMetadataSectionProtocol>

- (id)sectionTitle;
- (id)sectionFooter;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)a0 tableView:(id)a1;
- (void)selectCellForIndex:(unsigned long long)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)willDisplayCell:(id)a0 forIndex:(unsigned long long)a1 tableView:(id)a2;

@end
