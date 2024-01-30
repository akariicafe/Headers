@class CBClient, NSMutableArray, PSListController;

@interface DBSBrightnessManager : NSObject

@property (retain, nonatomic) NSMutableArray *specifiers;
@property (retain, nonatomic) CBClient *brightnessClient;
@property (weak, nonatomic) PSListController *delegate;

+ (id)defaultManager;
+ (void)removeSpecifiersFrom:(id)a0;
+ (BOOL)specifiersPresentIn:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)brightnessChangedExternally;
- (id)backlightValue:(id)a0;
- (id)mainDisplayBrightnessSpecifiers;
- (void)_cleanupTransactionRef;
- (id)_generateMainBrightnessSpecifier;
- (id)getAutoWhiteBalanceEnabled:(id)a0;
- (void)handleBrightnessChangedNotification:(id)a0;
- (void)setAutoWhiteBalanceEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setBacklightValue:(id)a0 specifier:(id)a1;
- (void)showAlertToDisableAccessibilityFilters:(id /* block */)a0 cancel:(id /* block */)a1;

@end
