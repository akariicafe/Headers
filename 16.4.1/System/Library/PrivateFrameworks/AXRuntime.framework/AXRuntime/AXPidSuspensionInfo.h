@class NSMutableDictionary;

@interface AXPidSuspensionInfo : NSObject {
    NSMutableDictionary *_suspendsPids;
    NSMutableDictionary *_probationPids;
    NSMutableDictionary *_tentativeSuspendedPids;
    NSMutableDictionary *_associatedRemotePidCache;
    NSMutableDictionary *_associatedRemotePids;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)associatedRemotePidsForDisplay:(int)a0;
- (id)timeoutProbationPidsForDisplay:(int)a0;
- (id)associatedRemotePidCacheForDisplay:(int)a0;
- (id)suspendedPidsForDisplay:(int)a0;
- (id)tentativeSuspendedPidsForDisplay:(int)a0;

@end
