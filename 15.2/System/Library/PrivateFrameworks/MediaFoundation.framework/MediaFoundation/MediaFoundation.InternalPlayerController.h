@class NSDictionary;

@interface MediaFoundation.InternalPlayerController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFStateDumpable, MFResettable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ targetRate;
    void /* unknown type, empty encoding */ targetStartTime;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ scanningSubscription;
    void /* unknown type, empty encoding */ lastFullyDownloadedPlayerItem;
    void /* unknown type, empty encoding */ reportedResumePlaybackTime;
    void /* unknown type, empty encoding */ preSetQueueItem;
    void /* unknown type, empty encoding */ pendingSeek;
    void /* unknown type, empty encoding */ preferredRate;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;

@end
