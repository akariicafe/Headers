@class BBSettingsGateway, NSString, NSArray, NSDateComponents;

@interface PBBGatewayManager : NSObject

@property (nonatomic) unsigned long long repeatedCallsEnabled;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (readonly, nonatomic) NSString *allowedGroupName;
@property (readonly, nonatomic) unsigned long long doNotDisturbPrivilegedSenderType;
@property (readonly, nonatomic) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) NSDateComponents *dndFromComponents;
@property (readonly, nonatomic) NSDateComponents *dndToComponents;
@property (retain, nonatomic) NSArray *bbSections;

+ (id)sharedManager;
+ (id)dateComponentsFromDNDScheduleTime:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadBBSections;
- (void)loadDNDState;
- (BOOL)repeatedCalls;

@end
