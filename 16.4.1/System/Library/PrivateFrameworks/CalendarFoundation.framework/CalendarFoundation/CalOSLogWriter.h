@class NSObject;
@protocol OS_os_log;

@interface CalOSLogWriter : CalLogWriter {
    NSObject<OS_os_log> *CalOSLogClient;
}

+ (id)autoLogNamespaces;
+ (unsigned char)osLogLevelfromCalLogLevel:(int)a0;

- (void)write:(id)a0;
- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)_configureAutoLogNamespaces;
- (void)_configureOSLogClient;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)a0 chunkBytes:(const char *)a1;
- (void)_logStringInChunks:(id)a0;

@end
