@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (void).cxx_destruct;
- (id)primaryTarget;
- (BOOL)addActivityTarget:(id)a0;
- (BOOL)removeActivityTarget:(id)a0;
- (void)setPrimaryTarget:(id)a0;
- (id)allTargets;
- (id)displayName;

@end
