@class NSString, BMStoreStream;

@interface BMHomeKitClientActionSetStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)publisher;
- (void).cxx_destruct;
- (id)init;

@end
