@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)primaryTarget;
- (BOOL)addActivityTarget:(id)a0;
- (BOOL)removeActivityTarget:(id)a0;
- (void)setPrimaryTarget:(id)a0;
- (void)dealloc;
- (id)allTargets;
- (id)displayName;

@end
