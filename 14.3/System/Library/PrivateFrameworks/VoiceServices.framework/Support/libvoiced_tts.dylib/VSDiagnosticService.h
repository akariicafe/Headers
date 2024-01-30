@class NSString, NSDictionary;

@interface VSDiagnosticService : NSObject

@property (retain, nonatomic) NSString *audioDumpPath;
@property (retain, nonatomic) NSDictionary *audioDumpFileAttributes;

+ (id)defaultService;

- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0;
- (void)dumpStreamAudio:(id)a0;
- (void)collectTailspin:(id /* block */)a0;
- (void)dumpCompressedAudio:(id)a0;
- (unsigned long long)totalDiagnosticFileSize;
- (void)removeDirectory;
- (void)createDirectoryIfNeeded;
- (void)removeOldFiles;

@end
