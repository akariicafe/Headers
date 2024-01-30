@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {
    id /* block */ _aggregationBlock;
}

- (id)initWithAggregationBlock:(id /* block */)a0;
- (void)sendMessageToClient:(id)a0 timestamp:(double)a1 category:(unsigned short)a2 type:(unsigned short)a3 payload:(id)a4;
- (void)dealloc;

@end
