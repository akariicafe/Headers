@class NSArray, NSMutableArray;

@interface DESSandBoxManager : NSObject {
    NSArray *_extensions;
    NSMutableArray *_consumedSandboxExtensions;
}

+ (void)initialize;
+ (id)sandboxExtensionsToXPCConnection:(id)a0 fileURLs:(id)a1 requireWrite:(BOOL)a2 outError:(id *)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithExtensions:(id)a0;
- (void)releaseExtensions;
- (BOOL)consumeExtensionsWithError:(id *)a0;

@end
