@class NSString, NSMutableDictionary, NSData, NSDictionary, NSNumber;

@interface PLBBSleepWakeMsg : PLBBMsgRoot

@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *swReason;
@property (retain) NSString *bbWakeChannel;
@property (retain) NSString *bbWakeType;
@property (retain) NSString *bbWakeSubType;
@property (retain) NSData *bbWakeDataBin;
@property (retain) NSDictionary *bbWakeDataParsed;
@property (retain) NSString *qmiSvcType;
@property (retain) NSString *qmiClntId;
@property (retain) NSString *qmiMsgId;
@property (retain) NSString *qmiMsgType;
@property (retain) NSString *qmiLen;
@property (retain) NSString *ariGroupId;
@property (retain) NSString *ariMsgId;
@property (retain) NSString *ariMsgName;
@property (retain) NSString *ariLen;
@property (retain) NSString *ariSeqNum;
@property (retain) NSString *swAtCmd;
@property (retain) NSString *swRawData;
@property (retain) NSNumber *swSvcId;
@property (retain) NSString *swClientId;
@property (retain) NSString *swMsgId;
@property (retain) NSString *swMsgType;
@property (retain) NSString *swCmdName;
@property (retain) NSString *swCmdFullName;
@property (retain) NSDictionary *swIpData;
@property (retain) NSString *swRadioClass;
@property (retain) NSString *swCTData;
@property (retain) NSString *swChan;
@property (retain) NSString *swCmd;

+ (id)entryEventPointDefinitionSleepWakeActivityMavABM;
+ (id)entryEventPointDefinitionSleepWakeActivityIceABM;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void).cxx_destruct;
- (void)refreshSleepWakeActivity;
- (void)logEventPointSleepWakeABM;

@end
