@class NSString, BMStoreStream, BMSource;

@interface ATXUserNotificationDigestBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
    BMSource *_source;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStoreConfig:(id)a0;

@end
