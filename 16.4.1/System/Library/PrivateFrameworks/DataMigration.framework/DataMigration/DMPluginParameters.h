@class NSDictionary, NSString;

@interface DMPluginParameters : NSObject

@property (retain, nonatomic) NSDictionary *dispositionSupersetOfContext;
@property (copy, nonatomic) NSString *backupDeviceUUID;

+ (id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDispositionSupersetOfContext:(id)a0 backupDeviceUUID:(id)a1;

@end
