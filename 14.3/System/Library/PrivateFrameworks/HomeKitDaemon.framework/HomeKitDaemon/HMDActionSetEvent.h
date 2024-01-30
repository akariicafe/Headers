@class NSArray, NSString, NSUUID, HMDHome;

@interface HMDActionSetEvent : HMDLogEvent <HMDCoreDuetLogEvent, HMDAWDLogEvent>

@property (readonly) unsigned long long duetEventType;
@property (readonly, copy) NSArray *eventDataToLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long triggerSource;
@property (readonly, nonatomic) NSUUID *actionSetUUID;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSUUID *transactionId;
@property (readonly, nonatomic) unsigned int numAccessoriesModified;
@property (readonly, nonatomic) unsigned int numAccessoriesInHome;
@property (readonly, nonatomic) unsigned int numNonEmptyScenesInHome;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly, nonatomic) NSString *actionSetName;
@property (readonly, nonatomic) NSString *actionSetType;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, copy, nonatomic) NSArray *accessoryUUIDs;

+ (id)uuid;

- (void).cxx_destruct;
- (id)metadata;
- (id)value;
- (id)initWithActionSet:(id)a0 source:(unsigned long long)a1 numAccessories:(unsigned int)a2 bundleId:(id)a3 transactionId:(id)a4;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
