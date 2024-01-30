@interface AppleDepthLoggerHandler : NSObject

@property (nonatomic) BOOL active;

- (id)name;
- (long long)setHostName:(id)a0;
- (long long)setLogFolder:(id)a0;
- (void)preEnable;
- (void)postDisable;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logString:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 timestamp:(double)a3;
- (void)logCalibration:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;

@end
