@interface __NSTimeZone : NSTimeZone {
    struct __CFString { } *_name;
    struct __CFData { } *_data;
    void **_ucal;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    int _secondsFromGMT;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (long long)secondsFromGMTForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)abbreviationForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)name;
- (void)dealloc;
- (id)data;

@end
