@class SiriAnalyticsClientMessageStream;

@interface SiriAnalyticsClient : NSObject

@property (readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream;

- (void)setDefaultMessageStream:(id)a0;
- (BOOL)clientMessageStream:(id)a0 shouldEmitMessage:(id)a1 timestamp:(unsigned long long)a2 isolatedStreamUUID:(id)a3;
- (void).cxx_destruct;

@end
