@class NSString;

@interface ADFileLoggerHandler : AppleDepthLoggerHandler {
    NSString *_logFolder;
    NSString *_loggerName;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)name;
- (long long)setLogFolder:(id)a0;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logString:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 timestamp:(double)a3;
- (void)logCalibration:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 timestamp:(double)a2;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;
- (id)getFullPath:(const char *)a0 timestamp:(double)a1 extension:(const char *)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 timestamp:(double)a2;

@end
