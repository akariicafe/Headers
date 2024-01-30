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

- (void)lockDidBegin;
- (void)wakeMayBegin:(long long)a0 withTimestamp:(unsigned long long)a1;
- (void)_lock_wakeDidBegin:(long long)a0;
- (void)dealloc;
- (void)wakeDidBegin:(long long)a0;
- (void)wakeDidEnd;
- (id)init;
- (void).cxx_destruct;

@end
