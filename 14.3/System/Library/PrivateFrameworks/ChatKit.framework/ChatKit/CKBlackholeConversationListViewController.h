@class PSRootController, NSString, PSSpecifier, UIViewController;
@protocol PSController;

@interface CKBlackholeConversationListViewController : CKBlackholeConversationListCommonViewController <PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (void)handleURL:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)readPreferenceValue:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (id)specifier;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)rootController;
- (id)parentController;
- (void)setRootController:(id)a0;

@end
