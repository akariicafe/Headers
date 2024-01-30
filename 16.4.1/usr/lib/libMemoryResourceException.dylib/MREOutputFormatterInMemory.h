@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface MREOutputFormatterInMemory : NSObject <FPOutputFormatter> {
    BOOL _isPageSizeSet;
    BOOL _verbose;
    NSMutableDictionary *_data;
    NSMutableArray *_processes;
    NSMutableSet *_addedProcessGroups;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)printProcessesWithWarnings:(id)a0 processesWithErrors:(id)a1 globalErrors:(id)a2;
- (void)printProcessTotal:(id)a0 forProcess:(id)a1;
- (void)printProcessAuxData:(id)a0 forProcess:(id)a1;
- (void)printProcessHeader:(id)a0;
- (void)printSharedCategories:(id)a0 sharedWith:(id)a1 forProcess:(id)a2 hasProcessView:(BOOL)a3 total:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a4;
- (void)endAtTime:(id)a0;
- (void)printSharedCache:(id)a0 categories:(id)a1 sharedWith:(id)a2 total:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a3;
- (void)endProcessHeader:(id)a0;
- (void)printGlobalAuxData:(id)a0;
- (id)init;
- (void)printProcessCategories:(id)a0 total:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1 forProcess:(id)a2;
- (void).cxx_destruct;
- (void)printVmmapLikeOutputForProcess:(id)a0 regions:(id)a1;
- (void)printSummaryCategories:(id)a0 total:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1 hadErrors:(BOOL)a2;

@end
