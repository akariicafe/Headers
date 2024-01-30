@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (id)init;
- (BOOL)isRoutingConfigurationLoaded;
- (void).cxx_destruct;

@end
