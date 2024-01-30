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

- (id)init;
- (void).cxx_destruct;
- (void)_initializeKeys;
- (void)_setDefaultConfiguration;
- (id)_updateConfigWithContentsOfDictionary:(id)a0;
- (id)initWithContentsOfFileAtPath:(id)a0;
- (void)setConfigurationAssetVersion:(unsigned long long)a0;
- (id)toStringifiedJSON;

@end
