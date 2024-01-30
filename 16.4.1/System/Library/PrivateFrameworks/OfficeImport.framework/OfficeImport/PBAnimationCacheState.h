@class NSMutableSet;

@interface PBAnimationCacheState : PDAnimationCacheState {
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (BOOL)isValid:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
