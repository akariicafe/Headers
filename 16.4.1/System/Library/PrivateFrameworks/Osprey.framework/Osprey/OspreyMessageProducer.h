@protocol OspreyClientStreamingContext;

@interface OspreyMessageProducer : NSObject {
    id /* block */ _serializer;
    id<OspreyClientStreamingContext> _streamingContext;
}

- (void).cxx_destruct;
- (void)finishProducing;
- (void)produceMessage:(id)a0;
- (id)initWithMessageSerializer:(id /* block */)a0 streamingContext:(id)a1;
- (void)produceMessage:(id)a0 compressed:(BOOL)a1;

@end
