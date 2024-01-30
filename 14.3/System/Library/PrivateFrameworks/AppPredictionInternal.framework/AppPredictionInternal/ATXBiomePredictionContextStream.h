@class NSString, BMStoreStream;

@interface ATXBiomePredictionContextStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;

@end
