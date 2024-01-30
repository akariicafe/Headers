@protocol MTLBuffer;

@interface IDC_RegionOfInterestTracker : NSObject

@property (nonatomic) struct { int x0; int y0; int x1; int y1; int width; int height; } idcRoi;
@property (nonatomic) struct { int x0; int y0; int x1; int y1; int width; int height; } idcCrop;
@property (nonatomic) BOOL isCpuMaster;
@property (retain, nonatomic) id<MTLBuffer> metalBuffer;
@property (nonatomic) unsigned long long metalBufferOffset;

- (void).cxx_destruct;
- (void)synchronizeData;
- (struct { int x0; int x1; int x2; int x3; })getRoiData;
- (id)init:(id)a0 metalBufferOffset:(unsigned long long)a1 initialIdcRoi:(struct { int x0; int x1; int x2; int x3; int x4; int x5; })a2;
- (void)setRoiData:(struct { int x0; int x1; int x2; int x3; })a0;
- (struct { int x0; int x1; int x2; int x3; })getCropData;

@end
