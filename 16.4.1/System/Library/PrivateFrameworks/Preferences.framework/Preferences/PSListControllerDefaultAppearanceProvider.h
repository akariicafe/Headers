@class NSString;

@interface PSListControllerDefaultAppearanceProvider : NSObject <PSListControllerAppearanceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)estimatedHeightOfRowForCellWithIndexPath:(id)a0 inController:(id)a1;
- (void)listController:(id)a0 updateSectionContentInsetAnimated:(BOOL)a1 isRegularWidth:(BOOL)a2 contentInsetInitialized:(BOOL)a3 contentInsetInitializedApplicator:(id /* block */)a4;
- (void)customizeTableView:(id)a0 inContainerView:(id)a1 hostedInSetupController:(BOOL)a2 forListController:(id)a3;
- (id)cellForSpecifier:(id)a0 inController:(id)a1;
- (long long)tableViewStyleForListController:(id)a0;

@end
