@class NSDictionary, NSString;

@interface RMConfigurationSubscriberEventStreamDelegate : NSObject <RMConfigurationSubscriberEventStreamDelegate>

@property (readonly, copy, nonatomic) NSDictionary *applicatorClassesByType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configurationSubscriber:(id)a0 didReceiveMessage:(id)a1;
- (void)configurationSubscriber:(id)a0 didReceiveChangesForConfigurationTypes:(id)a1;
- (void)configurationSubscriber:(id)a0 didFetchConfigurationsByType:(id)a1;
- (void)configurationSubscriber:(id)a0 didFailToFetchConfigurationsWithTypes:(id)a1 error:(id)a2;
- (id)initWithApplicatorsByType:(id)a0;

@end
