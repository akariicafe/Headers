@class BBSettingsGateway, NSString, DNDGlobalConfigurationService, NSArray, NSDateComponents;
@protocol PBBGatewayManagerDelegate;

@interface PBBGatewayManager : NSObject <DNDGlobalConfigurationServiceListener>

@property (nonatomic) unsigned long long repeatedCallsEnabled;
@property (retain, nonatomic) DNDGlobalConfigurationService *globalConfigurationService;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (weak, nonatomic) id<PBBGatewayManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *allowedGroupName;
@property (readonly, nonatomic) unsigned long long doNotDisturbPrivilegedSenderType;
@property (readonly, nonatomic) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier;
@property (readonly, nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) NSDateComponents *dndFromComponents;
@property (readonly, nonatomic) NSDateComponents *dndToComponents;
@property (retain, nonatomic) NSArray *bbSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)dateComponentsFromDNDScheduleTime:(id)a0;

- (void)setPairSyncEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)globalConfigurationService:(id)a0 didReceiveUpdatedPairSyncState:(unsigned long long)a1;
- (void)loadBBSections;
- (BOOL)pairSyncEnabled;
- (void)loadDNDState;
- (BOOL)repeatedCalls;
- (BOOL)pairSyncStateEditable;

@end
