@class NSString, NSDictionary, NSDate, NSNumber;

@interface PLBBTelephonyRegMsg : PLBasebandMessage

@property unsigned char changed;
@property (retain) NSNumber *cellID;
@property (retain) NSNumber *lac;
@property (retain) NSNumber *dataAttached;
@property (retain) NSNumber *dataActive;
@property (retain) NSString *dataIndicator;
@property (retain) NSNumber *homeNetwork;
@property (retain) NSString *registrationStatus;
@property (retain) NSString *operatorName;
@property (retain) NSDate *timeUpdate;
@property (retain) NSDictionary *telRegInfo;

+ (id)bbEuLogMsgNameTelephonyReg;

- (void)refreshTelephonyReg;
- (id)init;
- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)logEventPointTelephonyRegistration;
- (void).cxx_destruct;
- (void)setAttrDataIndicator:(id)a0;
- (id)humanReadableRegistrationStatus:(id)a0;
- (void)processTelReg;
- (void)setAttrLac:(id)a0;
- (void)setAttrCellID:(id)a0;
- (void)setAttrOperatorName:(id)a0;
- (id)humanReadableDataIndicator:(id)a0;
- (void)setAttrHomeNetwork:(id)a0;
- (void)setAttrRegistrationStatus:(id)a0;
- (void)fillPLEntryAndSend:(id)a0;
- (void)setAttrDataAttached:(id)a0;
- (void)setAttrDataActive:(id)a0;
- (void)logEventPointTelephonyRegistrationAtInit;

@end
