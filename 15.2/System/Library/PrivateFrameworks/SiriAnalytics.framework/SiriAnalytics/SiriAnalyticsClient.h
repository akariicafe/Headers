@class SiriAnalyticsClientMessageStream;

@interface SiriAnalyticsClient : NSObject

@property (readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream;

- (BOOL)clientMessageStream:(id)a0 shouldEmitMessage:(id)a1 timestamp:(unsigned long long)a2 isolatedStreamUUID:(id)a3;
- (void).cxx_destruct;
- (void)setDefaultMessageStream:(id)a0;

@end
