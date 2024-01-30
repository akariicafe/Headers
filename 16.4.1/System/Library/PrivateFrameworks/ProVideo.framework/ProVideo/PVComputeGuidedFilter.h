@class PVImageBuffer;

@interface PVComputeGuidedFilter : NSObject {
    PVImageBuffer *_guide;
}

@property (readonly, nonatomic) int radius;
@property (readonly, nonatomic) float epsilon;

- (void).cxx_destruct;
- (BOOL)applyFilterToInput:(id)a0 output:(id)a1;
- (id)initWithGuide:(id)a0 radius:(int)a1 epsilon:(float)a2;
- (void)processStage1Float32Input:(float *)a0 inputRowBytes:(unsigned long long)a1 guide:(float *)a2 guideRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage1UInt8Input:(char *)a0 inputRowBytes:(unsigned long long)a1 guide:(char *)a2 guideRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage5Float32Guide:(float *)a0 guideRowBytes:(unsigned long long)a1 stats:(float *)a2 statsRowBytes:(unsigned long long)a3 output:(float *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (void)processStage5UInt6Guide:(char *)a0 guideRowBytes:(unsigned long long)a1 stats:(float *)a2 statsRowBytes:(unsigned long long)a3 output:(char *)a4 outputRowBytes:(unsigned long long)a5 width:(int)a6 height:(int)a7 radius:(int)a8;
- (BOOL)runCPUPathOnInput:(void *)a0 guide:(void *)a1 output:(void *)a2 radius:(int)a3 epsilon:(float)a4;

@end
