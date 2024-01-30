@class NSString;

@interface PSGSEIDDetailsController : PSListController <NFHardwareEventListener>

@property (retain, nonatomic) NSString *SEIDString;
@property (nonatomic) unsigned int hwState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)hardwareStateDidChange;
- (id)SEIDString:(id)a0;
- (BOOL)_setupSEIDSpecifier;
- (void)_updateHwStateChange;

@end
