@class NSArray, NSMutableDictionary, FPTime, NSMutableArray;

@interface FPFootprint : NSObject {
    NSMutableDictionary *_pidToFootprint;
    struct __CFDictionary { } *_memoryObjects;
    NSMutableDictionary *_sharedCacheMemoryObjectsTable;
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

+ (id)installCancelHandler:(id /* block */)a0;

- (void)analyzeData;
- (BOOL)gatherData;
- (void)printOutputVerbose:(BOOL)a0 summarize:(BOOL)a1 noCategories:(BOOL)a2;
- (void)addOutputFormatter:(id)a0;
- (id)initWithProcesses:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;

@end
