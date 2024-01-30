@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (BOOL)useFullActivityBitmaps;
- (id)maxRRCTimePolicyForTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)maxConnectionPolicyForTarget:(id)a0;

@end
