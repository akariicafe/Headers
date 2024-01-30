@class NSString, NSDictionary, NSArray, NSDate, NSMutableArray, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {
    unsigned int _task;
    int _pid;
    BOOL _taskIsCorpse;
    NSString *_hardwareModel;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    unsigned int _platform;
    BOOL _is64Bit;
    struct timeval { long long tv_sec; int tv_usec; } _proc_starttime;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    struct mapped_memory_t { } *_mappedMemory;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
    NSMutableDictionary *_environment;
}

@property (readonly, nonatomic) unsigned long long physicalFootprint;
@property (readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property (readonly, nonatomic) unsigned int idleExitStatus;

+ (id)parseBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0;
+ (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorFromBinaryImagesDescription:(id)a0 withArchitecture:(struct _CSArchitecture { int x0; int x1; })a1;

- (BOOL)is64Bit;
- (id)valueForEnvVar:(id)a0;
- (id)binaryImages;
- (int)cpuType;
- (id)executablePath;
- (id)processIdentifier;
- (id)displayName;
- (id)initWithTask:(unsigned int)a0 getBinariesList:(BOOL)a1;
- (id)_sanitizeVersion:(id)a0;
- (int)parentPid;
- (id)binaryImagesDescription;
- (id)_binaryImagesDescriptionForRanges:(id)a0;
- (void)clearCrashReporterInfo;
- (id)parentProcessPath;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (id)processName;
- (int)pid;
- (id)_osVersionDictionary;
- (id)_bundleLock;
- (unsigned int)task;
- (void)initFromLiveProcess;
- (void)setCrashReporterInfo;
- (id)binaryImagesDescriptionForBacktraces:(id)a0;
- (void)dealloc;
- (id)date;
- (BOOL)isAppleApplication;
- (BOOL)initFromCorpse;
- (id)processVersion;
- (id)_buildInfoDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)a0;
- (id)parentProcessName;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)_buildVersionDictionary;
- (id)processStatisticsDescription;
- (id)bundleIdentifier;
- (id)processVersionDictionary;
- (id)description;
- (id)dateAndVersionDescription;
- (id)initWithPid:(int)a0 orTask:(unsigned int)a1;
- (void)cleansePathsIncludingBinaryImageList:(BOOL)a0;
- (id)_rangesOfBinaryImages:(id)a0 forBacktraces:(id)a1;
- (void).cxx_destruct;
- (id)_cpuTypeDescription;

@end
