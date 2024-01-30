@class AVHapticClient;

@interface AVHapticPlayerChannel : NSObject {
    unsigned long long _behavior;
}

@property unsigned long long chanID;
@property (weak) AVHapticClient *client;
@property unsigned long long eventBehavior;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 client:(id)a1;
- (BOOL)startEvent:(unsigned long long)a0 atTime:(double)a1 token:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)sendEvents:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)startEvent:(unsigned long long)a0 atTime:(double)a1 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x0; float x1; } *)a2 count:(long long)a3 token:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)stopEvent:(unsigned long long)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)clearEvents:(double)a0 error:(id *)a1;
- (BOOL)resetAtTime:(double)a0 error:(id *)a1;
- (BOOL)setParameter:(unsigned long long)a0 value:(float)a1 atTime:(double)a2 error:(id *)a3;
- (BOOL)scheduleParameterCurve:(unsigned long long)a0 curve:(id)a1 atTime:(double)a2 error:(id *)a3;
- (void)invalidate;

@end
