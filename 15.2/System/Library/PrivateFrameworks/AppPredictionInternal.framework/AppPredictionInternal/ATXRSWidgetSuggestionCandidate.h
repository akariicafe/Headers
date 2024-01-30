@class CHSAvocadoDescriptor, NSString, INIntent, NSArray;

@interface ATXRSWidgetSuggestionCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) CHSAvocadoDescriptor *widgetDescriptor;
@property (readonly, nonatomic) NSString *donationBundleIdentifier;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSArray *relevanceProviders;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidgetDescriptor:(id)a0 donationBundleIdentifier:(id)a1 intent:(id)a2 relevanceProviders:(id)a3;

@end
