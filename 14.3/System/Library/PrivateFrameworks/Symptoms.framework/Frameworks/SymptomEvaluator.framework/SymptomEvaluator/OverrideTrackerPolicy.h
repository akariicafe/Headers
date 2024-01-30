@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)useFullActivityBitmaps;
- (id)maxConnectionPolicyForTarget:(id)a0;
- (id)maxRRCTimePolicyForTarget:(id)a0;

@end
