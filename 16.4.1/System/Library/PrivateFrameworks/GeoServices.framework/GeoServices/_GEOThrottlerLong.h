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
- (void)loadState:(id)a0;
- (id)captureState;
- (BOOL)isExpired;
- (unsigned long long)remainingEntries;
- (unsigned int)maxReqCount;
- (BOOL)addRequestTimestamp;
- (id)userInfoForError;
- (id)initWithKeyPath:(id)a0 requestCount:(unsigned long long)a1 interval:(double)a2 savedState:(id)a3;
- (double)expiresAt;
- (void).cxx_destruct;

@end
