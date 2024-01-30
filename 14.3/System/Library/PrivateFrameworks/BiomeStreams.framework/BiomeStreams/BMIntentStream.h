@class NSString, BMStoreStream;

@interface BMIntentStream : NSObject <BMSourceStream, BMStream> {
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void)deleteIntentsWithIdentifiers:(id)a0 bundleID:(id)a1;

@end
