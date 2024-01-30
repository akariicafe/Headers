@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (readonly, nonatomic) unsigned long long permissionType;
@property (retain, nonatomic) NSError *cancelError;

+ (id)promptForType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)description;
- (void)runForPairingDriver:(id)a0;
- (id)initWithPermissionType:(unsigned long long)a0;

@end
