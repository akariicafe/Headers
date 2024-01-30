@interface NEIKEv2RTT : NSObject

@property (nonatomic) int lastRequestMessageID;
@property (nonatomic) unsigned long long rtt_cur;
@property (nonatomic) unsigned long long srtt;
@property (nonatomic) unsigned long long rtt_var;
@property (nonatomic) unsigned long long rtt_start_time;
@property (nonatomic) unsigned long long rtt_min;
@property (nonatomic) unsigned long long rtt_updated;
@property (nonatomic) unsigned long long rxt_cur;
@property (nonatomic) unsigned short rxt_shift;

- (BOOL)startRTTMeasurement:(id)a0 requestMessageID:(int)a1;
- (unsigned long long)nextRetransmissionInterval;
- (void)updateRTT:(id)a0 responseMessageID:(int)a1;
- (id)init;
- (BOOL)getCurrentTime:(struct timeval { long long x0; int x1; } *)a0;
- (void)resetRTTMeasurement;
- (void)reset;

@end
