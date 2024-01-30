@class ATXUserNotificationDigestBiomeStream;

@interface ATXCompletedDigestBiomeStream : NSObject {
    ATXUserNotificationDigestBiomeStream *_rawDigestEventStream;
}

- (id)publisherFromStartTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initFromDigestEventBiomeStream:(id)a0;

@end
