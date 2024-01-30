@class NSString;

@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (nonatomic) BOOL presentedAsModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)a0 presentedAsModal:(BOOL)a1;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)setCoordinator:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)familySpecifiers;
- (void)imageDidUpdate:(id)a0;
- (id)totalChildUsageTime:(id)a0;
- (id)createSpecifierForUser:(id)a0 shouldWarn:(BOOL)a1;

@end
