@class NSString, BMStoreStream;

@interface ATXBiomeSuggestedHomePageStream : NSObject <BMStream, BMSourceStream>

@property (retain, nonatomic) BMStoreStream *inner;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (void)sendEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)source;

@end
