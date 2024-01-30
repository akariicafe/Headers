@class NSString;

@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setCoordinator:(id)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)familySpecifiers;
- (void)imageDidUpdate:(id)a0;
- (id)totalChildUsageTime:(id)a0;
- (void)showChildViewController:(id)a0;
- (id)createSpecifierForUser:(id)a0 shouldWarn:(BOOL)a1;

@end
