@class NSString;

@interface AXPhoenixMitigatorConfiguration : NSObject

@property (retain, nonatomic) NSString *disableWhenDisplayOffConfigurationKey;
@property (retain, nonatomic) NSString *disableWhenDeviceLockedConfigurationKey;
@property (nonatomic) BOOL disableWhenDisplayOff;
@property (nonatomic) BOOL disableWhenDeviceLocked;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)init;
- (void)_initializeKeys;
- (void)_setDefaultConfiguration;
- (void)_parseFromDictionary:(id)a0 missingKeys:(id)a1;
- (id)initWithDictionary:(id)a0 missingKeys:(id)a1;

@end
