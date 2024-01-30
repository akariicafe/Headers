@class ATXMissedNotificationRankingBiomeStream;

@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream *_rawMNREventStream;
}

- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initFromMissedNotificationRankingEventBiomeStream:(id)a0;

@end
