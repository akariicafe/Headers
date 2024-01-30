@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (id)allTargets;
- (void).cxx_destruct;
- (BOOL)addActivityTarget:(id)a0;
- (BOOL)removeActivityTarget:(id)a0;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)a0;

@end
