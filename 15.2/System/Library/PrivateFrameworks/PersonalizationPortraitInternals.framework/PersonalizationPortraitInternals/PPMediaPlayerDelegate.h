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

- (void)_registerForNowPlayingNotifications;
- (id)getResponse;
- (void).cxx_destruct;
- (id)init;
- (void)_donateDelayedResponse:(id)a0 timePlayed:(double)a1 bundleId:(id)a2;

@end
