@class ATXUserNotificationDigestBiomeStream;

@interface ATXCompletedDigestBiomeStream : NSObject {
    ATXUserNotificationDigestBiomeStream *_rawDigestEventStream;
}

- (id)publisherFromStartTime:(double)a0;
- (id)initFromDigestEventBiomeStream:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
