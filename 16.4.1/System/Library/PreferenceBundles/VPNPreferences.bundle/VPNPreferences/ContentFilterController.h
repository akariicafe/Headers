@class NSUUID, NSMutableArray;

@interface ContentFilterController : PSListController

@property (copy) NSUUID *serviceID;
@property (retain) NSMutableArray *perAppSpecifiers;
@property (retain) NSMutableArray *systemSpecifiers;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)someConfigurationChanged:(id)a0;
- (void)someStatusChanged:(id)a0;

@end
