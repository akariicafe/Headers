@interface TRIStopwatch : NSObject {
    unsigned long long _start_time;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _time_info;
}

+ (id)start;

- (id)init;
- (unsigned int)elapsed_ms;

@end
