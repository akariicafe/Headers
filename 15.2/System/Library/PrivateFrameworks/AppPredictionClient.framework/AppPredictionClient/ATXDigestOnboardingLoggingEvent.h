@class NSUUID, NSArray, NSString;

@interface ATXDigestOnboardingLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) int entrySource;
@property (readonly, nonatomic) int digestOnboardingOutcome;
@property (readonly, nonatomic) int finalUIShown;
@property (readonly, nonatomic) BOOL didSelectShowMore;
@property (readonly, nonatomic) double timeTaken;
@property (readonly, nonatomic) NSArray *deliveryTimes;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)proto;
- (id)encodeAsProto;
- (id)initWithSessionUUID:(id)a0 entrySource:(int)a1 digestOnboardingOutcome:(int)a2 finalUIShown:(int)a3 didSelectShowMore:(BOOL)a4 timeTaken:(double)a5 deliveryTimes:(id)a6;

@end
