@class PTParticipant;

@interface PTPushResult : NSObject

@property (class, readonly, nonatomic) PTPushResult *leaveChannelPushResult;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) PTParticipant *participant;

+ (id)pushResultForActiveRemoteParticipant:(id)a0;

- (void).cxx_destruct;
- (id)_initWithResultType:(long long)a0 participant:(id)a1;

@end
