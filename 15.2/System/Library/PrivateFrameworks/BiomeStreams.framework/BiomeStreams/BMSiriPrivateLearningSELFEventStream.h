@class NSString, BMRestrictedStream;

@interface BMSiriPrivateLearningSELFEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting> {
    BMRestrictedStream *_stream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)source;
- (id)publisher;
- (void).cxx_destruct;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (id)init;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)deleteEventsWithPredicate:(id /* block */)a0;

@end
