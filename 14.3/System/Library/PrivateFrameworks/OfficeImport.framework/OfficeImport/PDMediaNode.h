@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {
    PDAnimationTarget *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (long long)volume;
- (void)setVolume:(long long)a0;
- (BOOL)isMuted;
- (id)init;
- (void).cxx_destruct;
- (void)setIsMuted:(BOOL)a0;
- (id)target;
- (void)setTarget:(id)a0;
- (void)setIsShowWhenStopped:(BOOL)a0;
- (void)setNumberOfSlides:(long long)a0;
- (BOOL)isShowWhenStopped;
- (long long)numberOfSlides;

@end
