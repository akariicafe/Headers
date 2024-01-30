@class PSListController;

@interface PSBundleController : NSObject {
    PSListController *_parent;
}

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)load;
- (id)specifiersWithSpecifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unload;
- (id)initWithParentListController:(id)a0;

@end
