@class PPNamedEntityStore, NSDate, PPMediaPlayerResponse, NSObject;
@protocol OS_dispatch_queue;

@interface PPMediaPlayerDelegate : NSObject {
    PPNamedEntityStore *_namedEntityStore;
    double _donationDelaySeconds;
    BOOL _useSGNamedEntityDissector;
    PPMediaPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)bundleIdOfCurrentForegroundApp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNamedEntityStore:(id)a0 donationDelaySeconds:(double)a1 registersResponseLoading:(BOOL)a2 useSGNamedEntityDissector:(BOOL)a3;
- (void)_donateDelayedResponse:(id)a0 timePlayed:(double)a1 bundleId:(id)a2;
- (void)waitForQueueEmpty;
- (void)processResponse:(id)a0;
- (id)getResponse;
- (void)_registerForNowPlayingNotifications;

@end
