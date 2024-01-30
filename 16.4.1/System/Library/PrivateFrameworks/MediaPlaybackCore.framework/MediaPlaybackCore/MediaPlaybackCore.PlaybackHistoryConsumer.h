@class NSString;

@interface MediaPlaybackCore.PlaybackHistoryConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ subscription;
}

@property (class, nonatomic, readonly) NSString *identifier;

- (void)unsubscribeFromEventStream:(id)a0;
- (void)subscribeToEventStream:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
