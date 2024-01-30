@class ATXMissedNotificationRankingBiomeStream;

@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream *_rawMNREventStream;
}

- (id)publisherFromStartTime:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initFromMissedNotificationRankingEventBiomeStream:(id)a0;

@end
