@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (BOOL)isMuted;
- (void)setVolume:(long long)a0;
- (long long)volume;
- (void)setIsMuted:(BOOL)a0;
- (id)target;
- (void).cxx_destruct;
- (id)init;
- (void)setTarget:(id)a0;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;

@end
