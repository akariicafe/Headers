@class NSObject;
@protocol OS_os_log;

@interface CalOSLogWriter : CalLogWriter {
    NSObject<OS_os_log> *CalOSLogClient;
}

+ (id)autoLogNamespaces;

- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)initWithParameters:(id)a0;
- (void)_configureOSLogClient;
- (void)_configureAutoLogNamespaces;
- (void)_logStringInChunks:(id)a0;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)a0 chunkBytes:(const char *)a1;

@end
