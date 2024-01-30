@class DNDModeConfigurationService, NSDictionary;
@protocol DNDModeConfigurationServiceListener;

@interface ATXDNDModeConfigurationClient : NSObject {
    DNDModeConfigurationService *_dndConfigurationService;
    id<DNDModeConfigurationServiceListener> _updateListener;
    BOOL _isCacheValid;
    NSDictionary *_cachedModeConfig;
    NSDictionary *_cachedModesByModeIdentifiers;
    NSDictionary *_cachedModesBySemanticType;
}

+ (id)sharedInstance;

- (id)debug_allModeDescriptions;
- (unsigned long long)atxModeForDNDSemanticType:(long long)a0;
- (id)getAllModeConfigurationsWithoutCache;
- (void)refreshCachedConfigs;
- (id)modeConfigurationForDNDModeWithUUID:(id)a0;
- (id)dndModeForDNDModeWithUUID:(id)a0;
- (id)modesByModeIdentifiers;
- (void)invalidateCaches;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigurationService:(id)a0;
- (id)dndSemanticTypeForATXMode:(unsigned long long)a0;
- (id)dndModeForATXMode:(unsigned long long)a0;
- (id)configuredModesBySemanticType;
- (unsigned long long)atxModeForDNDMode:(id)a0;
- (id)configuredModes;
- (id)dndModeUUIDForDNDModeIdentifier:(id)a0;

@end
