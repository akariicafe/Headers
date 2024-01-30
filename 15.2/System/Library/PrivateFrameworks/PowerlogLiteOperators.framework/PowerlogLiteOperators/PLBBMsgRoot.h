@class NSString, NSDictionary, PLAgent, NSDate, NSNumber;

@interface PLBBMsgRoot : NSObject

@property (retain, nonatomic) NSString *msgName;
@property (retain, nonatomic) NSNumber *msgType;
@property (retain, nonatomic) NSString *msgPayload;
@property (retain, nonatomic) NSString *msgProcErr;
@property (retain, nonatomic) NSDate *msgDate;
@property (retain, nonatomic) NSDictionary *msgEntry;
@property (retain, nonatomic) NSDictionary *msgKVPairs;
@property (retain, nonatomic) PLAgent *agent;

- (void).cxx_destruct;
- (id)init;
- (void)sendAndLogPLEntry:(id)a0 andOverride:(id)a1;
- (void)appendToMsgProcError:(id)a0;

@end
