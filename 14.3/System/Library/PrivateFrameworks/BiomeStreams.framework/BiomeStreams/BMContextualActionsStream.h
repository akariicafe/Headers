@class NSString, BMStoreStream;

@interface BMContextualActionsStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)source;

@end
