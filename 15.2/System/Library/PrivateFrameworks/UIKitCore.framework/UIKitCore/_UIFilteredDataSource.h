@class NSString;
@protocol UITableViewDataSource;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {
    BOOL _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
}

@property (nonatomic) long long filterType;
@property (nonatomic) id<UITableViewDataSource> tableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)_filteredNumberOfItemsGivenSection:(long long)a0 numberOfItems:(long long)a1;
- (BOOL)respondsToSelector:(SEL)a0;

@end
