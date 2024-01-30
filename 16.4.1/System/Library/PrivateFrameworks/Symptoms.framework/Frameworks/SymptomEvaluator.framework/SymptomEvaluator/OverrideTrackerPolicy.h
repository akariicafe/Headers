@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {
    NSMutableDictionary *_maxConnectionPolicyOverrides;
    NSMutableDictionary *_maxRRCTimePolicyOverrides;
}

+ (id)sharedInstance;

- (BOOL)useFullActivityBitmaps;
- (id)maxConnectionPolicyForTarget:(id)a0;
- (id)maxRRCTimePolicyForTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
