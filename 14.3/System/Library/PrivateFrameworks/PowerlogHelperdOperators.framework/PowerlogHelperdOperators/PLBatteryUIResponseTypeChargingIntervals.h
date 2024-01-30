@class PLEntry, NSArray, NSString, NSDate, PLBatteryUIResponderService;

@interface PLBatteryUIResponseTypeChargingIntervals : NSObject <PLBatteryUIResponseType>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property (retain) NSArray *battEntries;
@property (retain) PLEntry *lastBattEntry;
@property (retain) NSArray *resultArray;
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
