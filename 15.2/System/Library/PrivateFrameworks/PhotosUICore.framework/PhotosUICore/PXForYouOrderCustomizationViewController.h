@class PXForYouGadgetRankStorage;

@interface PXForYouOrderCustomizationViewController : UITableViewController {
    PXForYouGadgetRankStorage *_storage;
}

- (id)initWithStorage:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_handleDone;
- (long long)_rankForItem:(long long)a0;
- (id)_currentGadgetTypesInOrderOfRank;
- (void)_persistRanksOfGadgetTypes:(id)a0;
- (void)_fillDefaultRanks;

@end
