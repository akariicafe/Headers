@class NSDictionary;

@interface RMPasscodeViewController : PSListController

@property (copy, nonatomic) NSDictionary *passcodeSettings;

- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_processUserInfoDictionary;
- (id)_specifiersForPasscodeSettings;
- (id)simplePasscodes:(id)a0;
- (id)minLength:(id)a0;
- (id)maxAttempts:(id)a0;
- (id)maxGracePeriod:(id)a0;
- (id)maxInactivity:(id)a0;
- (id)uniquePasscodes:(id)a0;

@end
