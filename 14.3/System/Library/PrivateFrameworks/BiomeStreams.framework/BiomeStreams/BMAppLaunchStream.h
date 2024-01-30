@class NSString, BMStoreStream;

@interface BMAppLaunchStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)source;

@end
