@class NSMutableArray;

@interface XRVMState : NSObject <NSSecureCoding> {
    unsigned long long _machAbsolute;
    unsigned long long _traceRelative;
    NSMutableArray *_regions;
    unsigned long long _residentSize;
    unsigned long long _swapSize;
    unsigned long long _dirtySize;
    unsigned long long _totalSize;
    unsigned long long _sharedRegionStart;
    unsigned long long _sharedRegionLength;
    struct __CFDictionary { } *_pageAnnotationsByRegion;
    unsigned int _task;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)currentStateForTask:(unsigned int)a0 pid:(int)a1 previousState:(id)a2 dehydratedDiffVersion:(BOOL)a3;

- (unsigned long long)dirtySize;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)residentSize;
- (id)initWithCoder:(id)a0;
- (id)regions;
- (void)dealloc;
- (unsigned long long)swappedSize;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)virtualSize;
- (void)setPageSize:(unsigned long long)a0;
- (void)_recalculateSizes;
- (void)_addRegion:(id)a0 annotation:(id)a1 new:(BOOL)a2;
- (void)_annotateRange:(struct _CSRange { unsigned long long x0; unsigned long long x1; })a0 withPath:(id)a1 type:(id)a2;
- (id)_annotationForRegion:(id)a0;
- (id)detailsForRegion:(id)a0;
- (void)hydrateWithPreviousState:(id)a0;
- (unsigned long long)machAbsoluteTimestamp;
- (id)regionForAddress:(unsigned long long)a0;
- (id)regionsWithOptions:(int)a0;
- (id)summaryRegionsWithOptions:(int)a0;
- (unsigned long long)traceRelativeTimestamp;

@end
