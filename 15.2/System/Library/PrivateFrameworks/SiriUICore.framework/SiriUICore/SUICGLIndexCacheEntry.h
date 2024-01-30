@interface SUICGLIndexCacheEntry : NSObject

@property (nonatomic) unsigned int numAuraIndices;
@property (nonatomic) unsigned int numAuraIndicesCulled;
@property (nonatomic) unsigned int numWaveIndices;
@property (nonatomic) unsigned int *gl_indices;

- (void)dealloc;

@end
