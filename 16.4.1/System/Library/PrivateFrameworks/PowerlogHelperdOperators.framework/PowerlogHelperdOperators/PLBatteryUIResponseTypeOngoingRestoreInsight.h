@class PLBatteryUIResponderService, NSString;

@interface PLBatteryUIResponseTypeOngoingRestoreInsight : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
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
