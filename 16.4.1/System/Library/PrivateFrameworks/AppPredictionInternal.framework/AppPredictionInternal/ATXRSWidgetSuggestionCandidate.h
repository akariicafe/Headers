@class INIntent, NSString, NSArray, CHSWidgetDescriptor;

@interface ATXRSWidgetSuggestionCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) CHSWidgetDescriptor *widgetDescriptor;
@property (readonly, nonatomic) NSString *donationBundleIdentifier;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSArray *relevanceProviders;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithWidgetDescriptor:(id)a0 donationBundleIdentifier:(id)a1 intent:(id)a2 relevanceProviders:(id)a3;

@end
