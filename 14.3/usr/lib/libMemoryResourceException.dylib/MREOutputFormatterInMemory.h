@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface MREOutputFormatterInMemory : NSObject <FPOutputFormatter>

@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSMutableArray *processes;
@property (retain, nonatomic) NSMutableSet *addedProcessGroups;
@property (nonatomic) BOOL isPageSizeSet;
@property (nonatomic) BOOL verbose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)printSummaryCategories:(id)a0 total:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1 hadErrors:(BOOL)a2;
- (id)dataForCategories:(id)a0;
- (void)printProcessHeader:(id)a0;
- (void)endProcessHeader:(id)a0;
- (void)printProcessTotal:(id)a0 forProcess:(id)a1;
- (void)printProcessCategories:(id)a0 total:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1;
- (void)printSharedCategories:(id)a0 sharedWith:(id)a1 forProcess:(id)a2 hasProcessView:(BOOL)a3 total:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a4;
- (void)printProcessAuxData:(id)a0;
- (void)printProcessesWithWarnings:(id)a0 processesWithErrors:(id)a1 globalErrors:(id)a2;
- (void)printGlobalAuxData:(id)a0;
- (void)endAtTime:(id)a0;
- (void)printVmmapLikeOutputForProcess:(id)a0 regions:(id)a1;

@end
