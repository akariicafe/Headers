@class NSString, BMStoreStream;

@interface ATXBiomeUIStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStoreConfig:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;

@end
