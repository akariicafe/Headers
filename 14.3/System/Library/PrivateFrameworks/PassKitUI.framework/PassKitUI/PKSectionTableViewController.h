@interface PKSectionTableViewController : UITableViewController {
    unsigned long long _numberOfSections;
    struct { unsigned long long numberOfSections; unsigned long long *indexToSection; unsigned long long *sectionToIndex; } _currentMap;
    struct { unsigned long long numberOfSections; unsigned long long *indexToSection; unsigned long long *sectionToIndex; } _bufferedMap;
}

@property (nonatomic) BOOL skipSetupForReadableContentGuide;

- (BOOL)reloadData;
- (unsigned long long)sectionForIndex:(unsigned long long)a0;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (id)initWithStyle:(long long)a0 numberOfSections:(unsigned long long)a1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)reloadSections:(id)a0;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)a0;
- (BOOL)isSectionMapped:(unsigned long long)a0;
- (unsigned long long)indexForSection:(unsigned long long)a0;
- (long long)rowAnimationForInsertingSection:(unsigned long long)a0;
- (BOOL)recomputeMappedSectionsAndReloadSections:(id)a0;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)a0;
- (unsigned long long)numberOfMappedSections;
- (BOOL)isMappingValid;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)reloadSection:(unsigned long long)a0;
- (long long)rowAnimationForReloadingSection:(unsigned long long)a0;
- (BOOL)_recomputeMappedSections;
- (void)_swapBuffers;
- (long long)rowAnimationForDeletingSection:(unsigned long long)a0;
- (void)viewDidLoad;

@end
