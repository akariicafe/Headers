@class NSUUID, NSString, NSArray;

@interface HMDHomeConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent> {
    BOOL _isResidentCapable;
    BOOL _isResidentEnabled;
    BOOL _isDemoHomeConfigured;
    unsigned int _databaseSize;
    unsigned int _metadataVersion;
}

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *homeConfigurations;
@property (nonatomic) unsigned long long version;

+ (void)initialize;
+ (id)uuid;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithHomes:(id)a0;
- (void)logAWDEventDescription;
- (id)generateAWDHomeConfiguration:(id)a0;
- (id)getHomeConfiguration:(id)a0;
- (id)convertToAWDHAPServiceList:(id)a0;
- (id)convertToAWDMultiUserSettingsList:(id)a0;
- (int)convertToAWDNetworkProtectionStatus:(int)a0;
- (id)convertToAWDHAPService:(id)a0;
- (id)convertToAWDMultiUserSettings:(id)a0;
- (int)convertToAWDMultiUserValueType:(int)a0;

@end
