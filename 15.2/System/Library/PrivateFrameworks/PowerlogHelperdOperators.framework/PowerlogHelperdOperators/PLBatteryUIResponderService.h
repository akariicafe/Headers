@class PLXPCResponderOperatorComposition, NSString, NSMutableDictionary;

@interface PLBatteryUIResponderService : PLService <PLBatteryUIResponseType>

@property (retain) NSString *requestingService;
@property (retain) NSString *plistCopyDestination;
@property BOOL skipPlistWrite;
@property (retain) NSMutableDictionary *requestedObjects;
@property (retain) NSMutableDictionary *resultDictionary;
@property (retain) PLXPCResponderOperatorComposition *queryResponder;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)configure:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (double)endOfDay;
- (void)coalesce;
- (id)result;
- (void)initOperatorDependancies;

@end
