@class NSString, NSDictionary, PLBatteryUIResponderService, NSNumber;

@interface PLBatteryUIResponseTypeLastChargeLevel : NSObject <PLBatteryUIResponseType>

@property (retain) NSNumber *lastChargeValue;
@property (retain) NSNumber *lastChargeTimestamp;
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
