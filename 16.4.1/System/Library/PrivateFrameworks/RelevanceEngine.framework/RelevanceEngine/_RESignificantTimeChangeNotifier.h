@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)_notify;
- (id)init;
- (void).cxx_destruct;

@end
