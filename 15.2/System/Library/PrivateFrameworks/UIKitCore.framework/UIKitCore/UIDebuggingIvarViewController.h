@class NSObject;

@interface UIDebuggingIvarViewController : UITableViewController <UIDebuggingInformationViewController>

@property (weak, nonatomic) NSObject *inspectedObject;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;
- (id)_ivarForIndexPath:(id)a0;
- (Class)_classForTableSection:(long long)a0;
- (id)_ivarsForInspectedObjectInClass:(Class)a0;
- (id)_classHierarchyForInspectedObject;
- (void).cxx_destruct;
- (id)init;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
