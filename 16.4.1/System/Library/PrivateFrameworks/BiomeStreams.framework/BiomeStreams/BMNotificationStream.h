@class BMStoreStream;

@interface BMNotificationStream : NSObject {
    BMStoreStream *_storeStream;
}

- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)identifier;
- (id)init;
- (void).cxx_destruct;
- (id)source;

@end
