@class NSString, NSMutableDictionary, NSDate, NSNumber;

@interface PLBBMsgAll : PLBBMsgRoot

@property (retain) NSNumber *iseqNum;
@property (retain) NSDate *ibbDate;
@property (retain) NSString *ieventCode;
@property (retain) NSString *ipayload;
@property (retain) NSString *ierror;
@property (retain) NSNumber *seqNum;
@property (retain) NSDate *bbDate;
@property (retain) NSString *payload;
@property (retain) NSString *error;
@property (retain) NSMutableDictionary *info;

+ (id)entryEventNoneBBMsgAll;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void).cxx_destruct;
- (void)setISeqNum:(id)a0;
- (void)refreshBBMsgAll;
- (void)logEventNoneBBMsgAll;

@end
