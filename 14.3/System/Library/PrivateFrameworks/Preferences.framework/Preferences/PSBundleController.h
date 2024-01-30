@class PSListController;

@interface PSBundleController : NSObject {
    PSListController *_parent;
}

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)load;
- (id)init;
- (void).cxx_destruct;
- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0;
- (void)unload;

@end
