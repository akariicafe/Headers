@class NSArray, NSMutableDictionary, FPTime, NSMutableArray;

@interface FPFootprint : NSObject {
    NSMutableDictionary *_pidToFootprint;
    struct __CFDictionary { } *_memoryObjects;
    struct __CFDictionary { } *_sharedCacheTranslatedMemoryObjects;
    struct __CFDictionary { } *_sharedCacheMemoryObjects;
    struct __CFDictionary { } *_textMemoryObjects;
    struct __CFDictionary { } *_linkeditMemoryObjects;
    NSMutableArray *_uniqueMemoryObjects;
    NSMutableArray *_outputFormatters;
    BOOL _earlyExit;
}

@property (class, nonatomic) BOOL breakDownPhysFootprint;
@property (class, nonatomic, getter=isSharingAnalysisDisabled) BOOL sharingAnalysisDisabled;

@property (readonly, nonatomic) NSArray *processes;
@property (nonatomic) unsigned int qualityOfService;
@property (readonly, nonatomic) FPTime *gatherStartTime;
@property (readonly, nonatomic) FPTime *gatherEndTime;

+ (void)_totalForCategories:(id)a0 outTotal:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1;
+ (id)_processesBySortingPidDesc:(id)a0;
+ (id)installCancelHandler:(id /* block */)a0;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProcesses:(id)a0;
- (BOOL)gatherData;
- (void)analyzeData;
- (id)_categoriesForAllProcessesShouldSummarize:(BOOL)a0;
- (void)_addProcess:(id)a0;
- (void)finalizeObjects;
- (void)_buildProcessToFootprintMap;
- (id)_notHiddenProcesses;
- (id)_processesBySortingFootprint:(id)a0;
- (void)printVmmapLikeOutputForProcesses:(id)a0;
- (id)_generateProcessToProcessGroups;
- (id)_categoriesForObjects:(id)a0 viewedByProcess:(id)a1 hasProcessView:(unsigned char *)a2 summarize:(BOOL)a3;
- (unsigned long long)_calculateFootprintForProcess:(id)a0;
- (void)addOutputFormatter:(id)a0;
- (void)printOutputVerbose:(BOOL)a0 summarize:(BOOL)a1;

@end
