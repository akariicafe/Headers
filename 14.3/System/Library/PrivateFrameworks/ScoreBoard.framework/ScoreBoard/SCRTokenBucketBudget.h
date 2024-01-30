@class NSString, NSDate;

@interface SCRTokenBucketBudget : NSObject <SCRGovernor> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _capacity;
    double _singleTokenInterval;
    double _tokenCount;
    NSDate *_lastCountUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)taskAdministrator:(id)a0 isEligibleToPerformTask:(id)a1 eligiblityError:(id *)a2;
- (void)taskAdministrator:(id)a0 willPerformTask:(id)a1;
- (void)_locked_updateTokenCountForTimeElapsed;
- (id)initWithBucketCapacity:(double)a0 refreshInterval:(double)a1;
- (void)_simulateTimePassing:(double)a0;

@end
