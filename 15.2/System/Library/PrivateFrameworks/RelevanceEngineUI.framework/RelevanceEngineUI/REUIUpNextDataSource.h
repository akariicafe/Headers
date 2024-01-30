@class RERelevanceEngine, NSArray, NSString, REUIRelevanceEngineController;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIUpNextDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource> {
    REUIRelevanceEngineController *_controller;
}

@property (readonly, nonatomic) RERelevanceEngine *relevanceEngine;
@property (readonly, nonatomic) NSArray *sectionOrder;
@property (weak, nonatomic) id<REUIRelevanceEngineControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithRelevanceEngine:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithRelevanceEngine:(id)a0 sectionOrder:(id)a1;
- (id)_sectionTitleAtIndex:(unsigned long long)a0;

@end
