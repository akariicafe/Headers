@class HKCategorySample, NSMutableArray;
@protocol HKDataMetadataViewControllerDelegate;

@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController <HKHeartbeatSequenceListMetadataSectionDelegate>

@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (retain, nonatomic) HKCategorySample *event;
@property (retain, nonatomic) NSMutableArray *sections;
@property (weak, nonatomic) id<HKDataMetadataViewControllerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_loadSections;
- (void)heartbeatSequecesListQueryComplete:(id)a0;
- (BOOL)_addSectionIfNonNull:(id)a0;
- (void)_reloadAtrialFibrillationEducationTableHeaderView;
- (id)_shortVersionNumberFromString:(id)a0;
- (id)_atrialFibrillationEducationContainerView;
- (id)initWithEvent:(id)a0 delegate:(id)a1;

@end
