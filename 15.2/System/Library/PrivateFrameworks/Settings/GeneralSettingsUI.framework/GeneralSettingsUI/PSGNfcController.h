@class NSString, PSSpecifier;

@interface PSGNfcController : PSListController <NFHardwareEventListener>

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewDidLoad;
- (void)didChangeRadioState:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_refreshFooterForSpecifier:(id)a0;
- (BOOL)_setNfcEnable:(BOOL)a0;
- (void)_refreshNfcRadioStateSetting;
- (void)_disableNfcRadio;
- (void)_enableNfcRadio;
- (id)nfcEnable;
- (void)setNfcEnable:(id)a0 specifier:(id)a1;

@end
