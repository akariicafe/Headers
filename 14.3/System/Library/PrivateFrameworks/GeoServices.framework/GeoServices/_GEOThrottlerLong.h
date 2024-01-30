@class NSString;

@interface _GEOThrottlerLong : NSObject <_GEOThrottler> {
    unsigned int _maxRequestCount;
    unsigned int _currentRequestCount;
    double _lastResetTime;
    double _lastUseTime;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)stateIsExpired:(id)a0;

- (double)timeUntilReset;
- (BOOL)addRequestTimestamp;
- (unsigned long long)remainingEntries;
- (id)userInfoForError;
- (id)initWithKeyPath:(id)a0 requestCount:(unsigned long long)a1 interval:(double)a2 savedState:(id)a3;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)captureState;
- (unsigned int)maxReqCount;
- (double)expiresAt;
- (void)loadState:(id)a0;

@end
