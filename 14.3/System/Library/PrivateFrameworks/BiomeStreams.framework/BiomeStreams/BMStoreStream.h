@class BMStoreSource, NSString, BMStoreValidator, BMStreamsAccessClient, BMStoreConfig;

@interface BMStoreStream : NSObject <BMSourceStream, BMStream> {
    NSString *_streamIdentifier;
    BMStoreConfig *_storeConfig;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    BOOL _isPublic;
    BMStreamsAccessClient *_accessClient;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisher;
- (id)_publisher;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 isPublic:(BOOL)a2;
- (id)validator;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)initWithPublicStream:(long long)a0 storeConfig:(id)a1;
- (id)publisherFromStartTime:(double)a0;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)source;

@end
