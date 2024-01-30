@class NSString, PTUtil;
@protocol MTLCommandQueue;

@interface PTDisparityFilterPassThrough : NSObject <PTAbstractDisparityFilter> {
    id<MTLCommandQueue> _commandQueue;
    PTUtil *_util;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommandQueue:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)debugTextures:(id)a0;
- (id)debugTexturesNames;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
