@class JDDepthProcessor;

@interface JasperDepthFrameProcessor : NSObject

@property (retain, nonatomic) JDDepthProcessor *jdProc;

- (id)process:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id)initWithCalibrationDict:(id)a0;

@end
