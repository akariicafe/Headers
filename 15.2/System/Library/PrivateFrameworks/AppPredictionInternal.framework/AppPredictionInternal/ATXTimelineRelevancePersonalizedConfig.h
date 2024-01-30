@class NSDictionary;

@interface ATXTimelineRelevancePersonalizedConfig : NSObject {
    NSDictionary *_personalizedConfiguration;
}

- (id)_readPersonalizedConfiguration;
- (id)personalizedValueForParameter:(id)a0 forWidgetBundleIdentifier:(id)a1 kind:(id)a2;
- (id)initWithPersonalizedConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
