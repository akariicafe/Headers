@class REUpNextScheduler;

@interface _RESignificantTimeChangeNotifier : NSObject {
    REUpNextScheduler *_scheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_notify;
- (void)dealloc;

@end
