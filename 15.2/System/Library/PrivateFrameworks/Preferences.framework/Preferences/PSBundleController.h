@class PSListController;

@interface PSBundleController : NSObject {
    PSListController *_parent;
}

- (void)unload;
- (id)initWithParentListController:(id)a0;
- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)load;

@end
