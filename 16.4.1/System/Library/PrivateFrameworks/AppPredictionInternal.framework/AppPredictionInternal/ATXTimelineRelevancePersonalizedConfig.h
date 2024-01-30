@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (id)initWithPersonalizedConfiguration:(id)a0;
- (id)init;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;
- (void).cxx_destruct;
- (id)_readPersonalizedConfiguration;

@end
