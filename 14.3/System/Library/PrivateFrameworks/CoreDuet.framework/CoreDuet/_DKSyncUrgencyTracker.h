@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject {
    unsigned long long _urgency;
    NSMutableDictionary *_urgencies;
}

- (void)recomputeUrgency;
- (void).cxx_destruct;

@end
