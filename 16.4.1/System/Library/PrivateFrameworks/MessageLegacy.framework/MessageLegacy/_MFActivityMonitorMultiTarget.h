@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (void)dealloc;
- (id)allTargets;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)a0;
- (BOOL)addActivityTarget:(id)a0;
- (BOOL)removeActivityTarget:(id)a0;

@end
