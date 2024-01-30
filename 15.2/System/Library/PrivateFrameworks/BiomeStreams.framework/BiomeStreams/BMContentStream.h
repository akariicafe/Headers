@class NSString, BMStoreStream, BMContentSource;

@interface BMContentStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
    BMContentSource *_contentSource;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)initWithStreamIdentifier:(id)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;

@end
