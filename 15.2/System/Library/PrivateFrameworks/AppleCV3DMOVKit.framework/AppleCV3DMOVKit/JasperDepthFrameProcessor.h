@class JDDepthProcessor;

@interface JasperDepthFrameProcessor : NSObject

@property (retain, nonatomic) JDDepthProcessor *jdProc;

- (void).cxx_destruct;
- (id)process:(struct __CVBuffer { } *)a0;
- (id)initWithCalibrationDict:(id)a0;

@end
