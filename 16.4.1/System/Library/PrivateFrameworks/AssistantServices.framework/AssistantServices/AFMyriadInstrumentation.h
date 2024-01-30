@class CDASchemaCDAScoreBoosters, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadInstrumentation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CDASchemaCDAScoreBoosters *_currentBoost;
}

@property (readonly, nonatomic) CDASchemaCDAScoreBoosters *currentBoost;

- (id)init;
- (void).cxx_destruct;
- (id)_boostTypeAsString:(unsigned char)a0;
- (id)_createSchemaClientEvent:(id)a0;
- (void)_logRequestLinkMessageRequestId:(id)a0 cdaId:(id)a1;
- (void)_sendAndLogClientEvent:(id)a0 stState:(int)a1 atTimestamp:(unsigned long long)a2;
- (void)getCurrentBoosts:(id /* block */)a0;
- (void)logCDADeviceStateActivityEnded:(int)a0 withCdaId:(id)a1 withTimestamp:(unsigned long long)a2;
- (void)logCDADeviceStateActivityStartedOrChanged:(int)a0 withTrigger:(int)a1 withCdaId:(id)a2 withTimestamp:(unsigned long long)a3;
- (void)logCDAElectionAdvertisingEnded:(int)a0 withCdaId:(id)a1 withTimestamp:(unsigned long long)a2;
- (void)logCDAElectionAdvertisingEnding:(int)a0 withCdaId:(id)a1 withTimestamp:(unsigned long long)a2;
- (void)logCDAElectionAdvertisingStarted:(int)a0 withCdaId:(id)a1 withTimestamp:(unsigned long long)a2;
- (void)logCDAElectionAdvertisingStarting:(int)a0 withDelay:(float)a1 withInterval:(float)a2 withCdaId:(id)a3 withTimestamp:(unsigned long long)a4;
- (void)logCDAElectionDecisionMade:(int)a0 withDecision:(int)a1 withPreviousDecision:(int)a2 timeSincePreviousDecision:(unsigned long long)a3 withWinningDevice:(id)a4 withThisDevice:(id)a5 withParticipants:(id)a6 withRawScore:(unsigned int)a7 withBoost:(id)a8 withCdaId:(id)a9 currentRequestId:(id)a10 withTimestamp:(unsigned long long)a11;
- (void)logCDAElectionDecisionMadeDebug:(int)a0 withCrossDeviceArbitrationAllowed:(BOOL)a1 advertisementData:(id)a2 withDeviceGroup:(unsigned int)a3 withCdaId:(id)a4 withTimestamp:(unsigned long long)a5;
- (void)logCDAElectionTimerEnded:(int)a0 withCdaId:(id)a1 withTimestamp:(unsigned long long)a2;
- (void)updateBoost:(unsigned char)a0 value:(unsigned int)a1;
- (void)updateIsTrump:(BOOL)a0 withReason:(int)a1;

@end
