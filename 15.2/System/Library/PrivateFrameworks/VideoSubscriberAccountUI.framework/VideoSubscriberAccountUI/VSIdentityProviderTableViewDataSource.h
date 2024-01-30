@class NSArray, NSDictionary, NSString, UITableView;

@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource>

@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle;
@property (copy, nonatomic) NSString *titleForTableHeader;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *identityProviders;
@property (nonatomic) unsigned long long additionalProvidersMode;
@property (nonatomic) NSString *requestedStorefrontCountryCode;
@property (copy, nonatomic) NSArray *tvProviderSupportedStorefronts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 indexPathForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)storefrontAtIndexPath:(id)a0;
- (id)identityProviderForRowAtIndexPath:(id)a0;
- (unsigned long long)_minimumProviderCountForIndexes;
- (id)_additionalProvidersRowTitle;
- (void)_scrollToTableHeaderView;
- (long long)_textAlignmentForRowAtIndexPath:(id)a0;
- (id)_textColorForRowAtIndexPath:(id)a0;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)a0;
- (long long)_cellStyleForRowAtIndexPath:(id)a0;
- (id)_titleForRowAtIndexPath:(id)a0;
- (void)setNumberOfLinesForCell:(id)a0 atIndexPath:(id)a1;

@end
