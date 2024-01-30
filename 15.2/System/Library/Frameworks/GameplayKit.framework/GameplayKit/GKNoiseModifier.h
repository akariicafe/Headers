@class NSString, NSMutableArray;

@interface GKNoiseModifier : NSObject <GKNoiseModule> {
    NSMutableArray *_inputModules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (double)valueAt:(SEL)a0;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)inputModuleAtIndex:(int)a0;
- (void)setInputModule:(id)a0 atIndex:(int)a1;
- (id)initWithInputModuleCount:(unsigned long long)a0;

@end
