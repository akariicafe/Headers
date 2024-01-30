@class NSDictionary, PLBatteryUIResponderService, NSString;

@interface PLBatteryUIResponseTypeReduceBrightnessSuggestion : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
@property double energyPercent;
@property BOOL isALSCurveHigherThanDefault;
@property (retain) NSDictionary *batteryBreakdown_Last24hrs;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (id)result;
- (void)configure:(id)a0;
- (id)dependencies;
- (void).cxx_destruct;
- (void)coalesce;

@end
