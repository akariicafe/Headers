@class _ANEDeviceController;

@interface _ANEProgramIOSurfacesMapper : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller;
@property (readonly, nonatomic) unsigned long long programHandle;
@property (readonly, nonatomic) _ANEDeviceController *deviceController;

+ (void)initialize;
+ (id)new;
+ (id)mapperWithController:(id)a0;
+ (id)mapperWithProgramHandle:(unsigned long long)a0;

- (id)initWithController:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)prepareANEMemoryMappingParams:(struct ANEMemoryMappingParamsStruct { struct ANEBufferStruct { struct __IOSurface *x0; unsigned int x1; int x2; int x3; unsigned int x4; } x0[128]; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a0 request:(id)a1;
- (BOOL)unmapIOSurfacesWithModel:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)validateRequest:(id)a0 model:(id)a1;

@end
