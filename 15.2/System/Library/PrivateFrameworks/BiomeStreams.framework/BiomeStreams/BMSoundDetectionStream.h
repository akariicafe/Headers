@class NSString, BMStoreStream;

@interface BMSoundDetectionStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)source;
- (id)publisher;
- (void).cxx_destruct;
- (id)init;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;

@end
