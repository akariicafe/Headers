@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (void)setVolume:(long long)a0;
- (BOOL)isMuted;
- (id)target;
- (id)init;
- (void)setIsMuted:(BOOL)a0;
- (long long)volume;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;

@end
