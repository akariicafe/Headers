@interface GKNoiseSource : NSObject

- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)inputModuleAtIndex:(int)a0;
- (void)setInputModule:(id)a0 atIndex:(int)a1;

@end
