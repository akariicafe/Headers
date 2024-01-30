@class NSNumber, NSError, NSDate;

@interface HDClinicalIngestionHandleStaleResourcesOperation : HDClinicalIngestionPerAccountOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (readonly, copy, nonatomic) NSDate *ingestStartDate;
@property (readonly, copy, nonatomic) NSNumber *numberOfAffectedResources;
@property (readonly, copy, nonatomic) NSError *operationError;

- (void)_cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (BOOL)_ensureHasIngestStartDate;
- (BOOL)_ensureProtectedDataAvailable;
- (BOOL)_addExtractionHintToStaleResources;
- (id)initWithTask:(id)a0 account:(id)a1 ingestStartDate:(id)a2 nextOperation:(id)a3;

@end
