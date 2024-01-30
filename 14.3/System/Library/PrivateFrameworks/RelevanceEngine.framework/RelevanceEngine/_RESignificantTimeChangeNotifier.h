@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notify;

@end
