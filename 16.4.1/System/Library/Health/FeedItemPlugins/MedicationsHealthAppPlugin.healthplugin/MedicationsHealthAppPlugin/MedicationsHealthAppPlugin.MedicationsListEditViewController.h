@interface MedicationsHealthAppPlugin.MedicationsListEditViewController : UITableViewController {
    void /* unknown type, empty encoding */ listManager;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ listRefereshSubscription;
    void /* unknown type, empty encoding */ medmojiCache;
    void /* unknown type, empty encoding */ currentIdentifiers;
    void /* unknown type, empty encoding */ listManagerState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderMedmoji;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)didTapDone;

@end
