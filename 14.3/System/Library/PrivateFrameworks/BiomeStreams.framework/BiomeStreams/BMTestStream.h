@class NSString, BMStoreStream;

@interface BMTestStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)source;

@end
