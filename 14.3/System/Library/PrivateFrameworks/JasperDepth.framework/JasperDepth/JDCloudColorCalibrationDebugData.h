@class NSData, NSDictionary;

@interface JDCloudColorCalibrationDebugData : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *debugImage;
@property (readonly, nonatomic) NSData *debugPointCloud;
@property (readonly, nonatomic) unsigned int debugPointCloudSize;
@property (readonly, nonatomic) NSDictionary *debugDict;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDebugImage:(struct __CVBuffer { } *)a0 pointCloud:(id)a1 pointCloudSize:(unsigned int)a2;

@end
