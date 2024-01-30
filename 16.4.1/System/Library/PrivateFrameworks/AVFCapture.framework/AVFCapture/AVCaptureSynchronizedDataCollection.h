@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {
    AVCaptureSynchronizedDataCollectionInternal *_internal;
}

@property (readonly) unsigned long long count;

+ (void)initialize;
+ (id)_shortStringForMetadataObjects:(id)a0;
+ (id)_shortStringForDataDroppedReason:(long long)a0;
+ (id)_shortStringForDataOutput:(id)a0 syncedData:(id)a1;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKeyedSubscript:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)_initWithPossibleDataOutputs:(id)a0;
- (void)_setSynchronizedData:(id)a0 forCaptureOutput:(id)a1;
- (id)synchronizedDataForCaptureOutput:(id)a0;

@end
