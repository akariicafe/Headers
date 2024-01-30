@class NSString, BMStoreStream;

@interface BMDKEventStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMStreamDeleting> {
    BMStoreStream *_storeStream;
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)streamNameFromDKStreamName:(id)a0;

- (id)publisher;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)publisherFromStartTime:(double)a0;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (id)initWithDKStreamIdentifier:(id)a0 contentProtection:(id)a1;
- (void)deleteEventsWithPredicate:(id /* block */)a0;
- (id)init;
- (void)deleteLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0 contentProtection:(id)a1;
- (id)source;

@end
