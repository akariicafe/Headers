@class NSSet, NSMutableArray;

@interface AppleDepthLogger : NSObject {
    int _activeHandlersCounter;
    NSMutableArray *_handlers;
    NSSet *_enabledLoggerOverrideSet;
}

@property (nonatomic) unsigned long long loggingPriority;

+ (id)defaultLoggerWithName:(id)a0;

- (long long)addHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)enable:(id)a0;
- (long long)setHostName:(id)a0;
- (long long)setLogFolder:(id)a0;
- (id)initWithHandlers:(id)a0;
- (id)visualLoggerPrefices;
- (void)toggleHandler:(id)a0 enable:(BOOL)a1;
- (void)toggleByClass:(Class)a0 enable:(BOOL)a1;
- (void)enableAll;
- (void)disableAll;
- (void)disable:(id)a0;
- (void)enableFileLogging;
- (void)disableFileLogging;
- (void)enableVisualLogging;
- (void)disableVisualLogging;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logPixelBuffer:(struct __CVBuffer { } *)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logPointCloud:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logPointCloud:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logString:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logString:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 priority:(unsigned long long)a3;
- (void)logRawBuffer:(void *)a0 size:(unsigned long long)a1 name:(const char *)a2 priority:(unsigned long long)a3 timestamp:(double)a4;
- (void)logCalibration:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logCalibration:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logDictionary:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logDictionary:(id)a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2;
- (void)logMatrix4x3:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)logMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 name:(const char *)a1 priority:(unsigned long long)a2 timestamp:(double)a3;
- (void)applyConfigurationToNewHandler:(id)a0;

@end
