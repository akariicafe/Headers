@class NSString;

@interface _GEOThrottlerShort : NSObject <_GEOThrottler> {
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__begin_; struct Timestamp *__end_; struct __compressed_pair<(anonymous namespace)::Timestamp *, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__value_; } __end_cap_; } _lastRequestTimes;
    unsigned int _currentIndex;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)stateIsExpired:(id)a0;

- (id)captureState;
- (BOOL)isExpired;
- (double)timeUntilReset;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 requestCount:(unsigned long long)a1 interval:(double)a2 savedState:(id)a3;
- (unsigned int)maxReqCount;
- (id)userInfoForError;
- (BOOL)addRequestTimestamp;
- (unsigned long long)remainingEntries;
- (id).cxx_construct;

@end
