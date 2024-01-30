@class NSDictionary;

@interface ATXClientModelSuggestionRouter : NSObject {
    NSDictionary *_routingConfig;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldRouteClientToInfoSuggestionEngine:(id)a0;
- (BOOL)isRoutingConfigurationLoaded;

@end
