@class NSString, NSMutableDictionary;

@interface SBWakeLogger : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) BOOL trackingWake;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned int timesyncService;
@property (nonatomic) unsigned int backlightService;
@property (retain, nonatomic) NSMutableDictionary *wakeSouceToEventDict;
@property (nonatomic) long long activeWakeLoggerSource;
@property (readonly, copy, nonatomic) NSString *activeWakeSourceDescription;

+ (id)sharedInstance;

- (void)wakeDidEnd;
- (void)wakeDidBegin:(long long)a0;
- (void)_lock_wakeDidBegin:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)lockDidBegin;
- (void)dealloc;
- (void)wakeMayBegin:(long long)a0 withTimestamp:(unsigned long long)a1;

@end
