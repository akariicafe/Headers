@class OS_os_log;

@interface TPSLogger : NSObject

@property (class, nonatomic, readonly) OS_os_log *default;
@property (class, nonatomic, readonly) OS_os_log *analytics;
@property (class, nonatomic, readonly) OS_os_log *daemon;
@property (class, nonatomic, readonly) OS_os_log *data;
@property (class, nonatomic, readonly) OS_os_log *discoverability;
@property (class, nonatomic, readonly) OS_os_log *pfl;
@property (class, nonatomic, readonly) OS_os_log *targeting;
@property (class, nonatomic, readonly) OS_os_log *tipkit;
@property (class, nonatomic, readonly) OS_os_log *welcome;
@property (class, nonatomic, readonly) OS_os_log *widget;
@property (class, nonatomic, readonly) OS_os_log *indexing;
@property (class, nonatomic, readonly) OS_os_log *search;

- (id)init;

@end
