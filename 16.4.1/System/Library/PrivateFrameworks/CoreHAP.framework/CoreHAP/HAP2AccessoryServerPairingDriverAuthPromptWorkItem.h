@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (readonly, nonatomic) unsigned long long permissionType;
@property (retain, nonatomic) NSError *cancelError;

+ (id)promptForType:(unsigned long long)a0;

- (void)cancelWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPermissionType:(unsigned long long)a0;
- (void)runForPairingDriver:(id)a0;

@end
