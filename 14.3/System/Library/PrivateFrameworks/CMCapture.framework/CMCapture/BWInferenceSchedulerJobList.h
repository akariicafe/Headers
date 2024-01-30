@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {
    unsigned long long _jobCount;
    unsigned long long _mutations;
    struct { id x0; id x1; unsigned int x2; unsigned char x3; unsigned char x4; _Atomic unsigned char x5; _Atomic unsigned char x6; } *_orderedJobs;
    NSMapTable *_jobIndexByProvider;
}

@property (readonly) unsigned long long count;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (struct { id x0; id x1; unsigned int x2; unsigned char x3; unsigned char x4; _Atomic unsigned char x5; _Atomic unsigned char x6; } *)jobAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
