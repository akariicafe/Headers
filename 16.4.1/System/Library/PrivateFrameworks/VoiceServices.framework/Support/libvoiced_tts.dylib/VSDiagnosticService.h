@class NSString, NSDictionary;

@interface VSDiagnosticService : NSObject

@property (retain, nonatomic) NSString *audioDumpPath;
@property (retain, nonatomic) NSDictionary *audioDumpFileAttributes;

+ (id)defaultService;

- (void)removeOldFiles;
- (void)dumpCompressedAudio:(id)a0 forRequest:(id)a1;
- (void)dumpStreamAudio:(id)a0 forRequest:(id)a1;
- (void)collectTailspin:(id /* block */)a0;
- (unsigned long long)totalDiagnosticFileSize;
- (void)createDirectoryIfNeeded;
- (void)dumpInstrumentMetrics:(id)a0 withTimestamp:(long long)a1;
- (void)removeDirectory;
- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;

@end
