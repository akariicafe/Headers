@class NSString, BMStoreStream;

@interface BMWorkoutStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;

@end
