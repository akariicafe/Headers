@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction

@property (nonatomic) unsigned long long cachedFlagState;
@property (retain, nonatomic) NSNumber *flagColor;

- (void).cxx_destruct;
- (BOOL)_isFlagged;
- (void)_toggleCachedFlagState;
- (void)_toggleFlagWithBuilder:(id)a0;
- (BOOL)flagState;

@end
