@class NSString, BMStoreStream;

@interface BMHomeKitClientAccessoryControlStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)publisher;
- (void).cxx_destruct;
- (id)init;

@end
