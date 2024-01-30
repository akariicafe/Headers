@interface WebAnimationDelegate : NSObject {
    void *m_owner;
}

- (void)animationDidStart:(id)a0;
- (void)setOwner:(void *)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
