@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface NMSMediaSyncInfoUpdaterHeartbeat : NSObject {
    NSObject<OS_dispatch_source> *_currentSyncInfoRequestDateTimer;
    NSString *_bundleIdentifier;
}

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
