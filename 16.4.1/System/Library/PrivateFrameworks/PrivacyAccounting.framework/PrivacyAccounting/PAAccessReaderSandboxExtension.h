@class NSString;

@interface PAAccessReaderSandboxExtension : NSObject {
    long long _handle;
}

@property (readonly, nonatomic) NSString *path;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHandle:(long long)a0 forRootDirectory:(id)a1;
- (id)initWithToken:(id)a0 forPath:(id)a1 error:(id *)a2;

@end
