@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (BOOL)isRoutingConfigurationLoaded;
- (BOOL)shouldPersistCacheForClientModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;

@end
