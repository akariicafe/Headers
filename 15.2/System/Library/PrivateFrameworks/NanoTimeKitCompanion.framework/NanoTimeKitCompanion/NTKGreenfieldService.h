@interface NTKGreenfieldService : NSObject <NTKGreenfieldDecodingServiceProtocol>

+ (id)_unzipWatchfaceFromURL:(id)a0;

- (void)unzipWatchfaceFromURL:(id)a0 withSandboxExtension:(char *)a1 completionBlock:(id /* block */)a2;
- (void)removeFileAtPath:(id)a0 withSandboxExtension:(char *)a1 completionBlock:(id /* block */)a2;

@end
