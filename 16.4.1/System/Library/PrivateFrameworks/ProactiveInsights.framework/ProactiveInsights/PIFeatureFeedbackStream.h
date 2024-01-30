@class NSString, BMStoreStream;

@interface PIFeatureFeedbackStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSString *identifier;

+ (id)rootPath;
+ (id)clientIdentifierForClientPath:(id)a0;

- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)init;
- (id)initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)source;

@end
