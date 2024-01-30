@class NSDictionary, PLBatteryUIResponderService, NSString;

@interface PLBatteryUIResponseTypeInsightsAndSuggestions : NSObject <PLBatteryUIResponseType>

@property (retain) NSDictionary *resultDictionary;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)result;
- (void)run;
- (void).cxx_destruct;
- (void)configure:(id)a0;
- (void)coalesce;

@end
