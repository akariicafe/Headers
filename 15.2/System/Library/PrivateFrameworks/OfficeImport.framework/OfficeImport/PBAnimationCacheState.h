@class NSMutableSet;

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (BOOL)isValid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
