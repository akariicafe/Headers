@class NSString, BMStoreStream;

@interface ATXUserNotificationBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
}

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)source;
- (id)publisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStoreConfig:(id)a0;
- (void)sendEvent:(long long)a0 notification:(id)a1 deliveryReason:(unsigned long long)a2;
- (void)deleteAllEvents;

@end
