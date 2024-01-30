@interface SKParticleSystemNode : SKNode {
    void *_skcParticleSystemNode;
}

- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;

@end
