@class NSObject;

@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController>

@property (weak, nonatomic) NSObject *inspectedObject;

- (id)_ivarForIndexPath:(id)a0;
- (Class)_classForTableSection:(long long)a0;
- (id)_ivarsForInspectedObjectInClass:(Class)a0;
- (id)_classHierarchyForInspectedObject;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;

@end
