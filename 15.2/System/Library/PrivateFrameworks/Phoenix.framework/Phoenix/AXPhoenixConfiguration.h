@class NSString, AXPhoenixMitigatorConfiguration, AXPhoenixClassifierConfiguration;

@interface AXPhoenixConfiguration : NSObject

@property (retain, nonatomic) NSString *majorVersionKey;
@property (retain, nonatomic) NSString *minorVersionKey;
@property (retain, nonatomic) NSString *classifierConfigurationKey;
@property (retain, nonatomic) NSString *mitigatorConfigurationKey;
@property (nonatomic) unsigned long long assetVersion;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSString *minorVersion;
@property (retain, nonatomic) AXPhoenixClassifierConfiguration *classifierConfiguration;
@property (retain, nonatomic) AXPhoenixMitigatorConfiguration *mitigatorConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)toStringifiedJSON;
- (id)initWithContentsOfFileAtPath:(id)a0;
- (void)setConfigurationAssetVersion:(unsigned long long)a0;
- (void)_initializeKeys;
- (void)_setDefaultConfiguration;
- (id)_updateConfigWithContentsOfDictionary:(id)a0;

@end
