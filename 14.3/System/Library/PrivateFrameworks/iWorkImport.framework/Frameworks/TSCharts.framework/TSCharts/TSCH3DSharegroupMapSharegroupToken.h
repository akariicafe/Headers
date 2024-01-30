@class TSCH3DGPUSharegroup;
@protocol MTLDevice;

@interface TSCH3DSharegroupMapSharegroupToken : TSCH3DSharegroupToken

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) TSCH3DGPUSharegroup *sharegroup;

+ (id)tokenWithDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseSharegroup:(id)a0;
- (id)tokenSharegroup;
- (BOOL)shouldClearCurrentContextOnOwnerChange;
- (BOOL)hasInterestForDiscreteGraphics;

@end
