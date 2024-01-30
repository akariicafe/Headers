@class _LTInvocationEventContext;

@interface _LTInvocationEventLog : NSObject

@property (readonly, nonatomic) _LTInvocationEventContext *context;

- (void)setMode:(long long)a0;
- (id)init;
- (void)start;
- (void)setTask:(long long)a0;
- (void).cxx_destruct;
- (id)mtID;
- (void)setLocales:(id)a0;
- (void)cancelWithReason:(id)a0 qssSessionID:(id)a1;
- (void)endSuccessfullyWithQSSSessionID:(id)a0;
- (void)endWithError:(id)a0 qssSessionID:(id)a1;
- (void)setOnDevice:(BOOL)a0;

@end
