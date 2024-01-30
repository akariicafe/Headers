@class NSMutableSet;

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isValid:(id)a0;

@end
