@class NSString, NSMutableSet;

@interface ATXFaceSuggestionConfiguredHomeScreenWidgetSignal : NSObject <ATXFaceSuggestionSignal> {
    NSMutableSet *_configuredWidgetContainerBundleIdentifiers;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
