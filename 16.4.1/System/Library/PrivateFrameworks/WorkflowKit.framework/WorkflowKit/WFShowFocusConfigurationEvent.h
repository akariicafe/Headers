@class NSString;

@interface WFShowFocusConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *systemFilterType;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)initWithAppBundleIdentifier:(id)a0 intentType:(id)a1;
- (id)initWithSystemFilterType:(id)a0;

@end
