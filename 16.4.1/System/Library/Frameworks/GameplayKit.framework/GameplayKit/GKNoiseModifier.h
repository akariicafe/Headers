@class NSString, NSMutableArray;

@interface GKNoiseModifier : NSObject <GKNoiseModule> {
    NSMutableArray *_inputModules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (id)initWithInputModuleCount:(unsigned long long)a0;
- (id)inputModuleAtIndex:(int)a0;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id)a0 atIndex:(int)a1;

@end
