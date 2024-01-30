@class NSArray, NSString, HAPAccessory, HMDAccessory, NSUUID;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDCoreDuetLogEvent, HMDAWDLogEvent>

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
@property (readonly, nonatomic) NSArray *characteristicsToRead;
@property (readonly, weak, nonatomic) HAPAccessory *hapAccessory;
@property (readonly, weak, nonatomic) HMDAccessory *hmdAccessory;
@property (readonly, nonatomic) BOOL isWriteOperation;
@property (readonly, nonatomic) BOOL isTimedWrite;
@property (nonatomic) BOOL isLocal;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) NSUUID *transactionId;
@property (readonly, nonatomic) unsigned long long triggerSource;
@property (readonly, nonatomic) BOOL isCached;
@property (readonly, nonatomic) NSString *primaryServiceType;
@property (readonly, nonatomic) BOOL isResidentAvailable;
@property (readonly, nonatomic) BOOL isRemoteAccessAllowed;
@property (readonly, nonatomic) BOOL isRemotelyReachable;
@property (nonatomic) unsigned long long consecutiveFailureCount;
@property (nonatomic) double timeIntervalSinceFirstFailure;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int numAccessoriesInHome;
@property (readonly, nonatomic) unsigned int numNonEmptyScenesInHome;
@property (readonly, copy, nonatomic) NSArray *writtenValues;
@property (readonly, copy, nonatomic) NSString *transportProtocolVersion;
@property (nonatomic, getter=isThreadAccessory) BOOL threadAccessory;

+ (id)uuid;
+ (id)characteristicReadLogEvent:(id)a0 hmdAccessory:(id)a1 hapAccessory:(id)a2 source:(unsigned long long)a3 isLocal:(BOOL)a4 transactionId:(id)a5 isCached:(BOOL)a6 bundleId:(id)a7;
+ (id)characteristicWriteLogEvent:(id)a0 hmdAccessory:(id)a1 hapAccessory:(id)a2 source:(unsigned long long)a3 isTimedWrite:(BOOL)a4 isLocal:(BOOL)a5 transactionId:(id)a6 bundleId:(id)a7 writtenValues:(id)a8;

@end
