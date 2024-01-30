@class NSDictionary, RMObserverStore;

@interface RMPasscodeSpecifierProvider : NSObject

@property (retain, nonatomic) RMObserverStore *observerStore;
@property (nonatomic) BOOL isManaged;
@property (copy, nonatomic) NSDictionary *passcodeSettings;

+ (void)_applyPasscodeDeclaration:(id)a0 toConglomerate:(id)a1;

- (id)specifiers;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWithObserverStore:(id)a0;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)a0;

@end
