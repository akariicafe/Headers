@protocol NSProgressPublisher;

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> _forwarder;
    BOOL _isOld;
    id /* block */ _unpublishingHandler;
}

- (void)cancel;
- (BOOL)isOld;
- (void)setFileURL:(id)a0;
- (void)setTotalUnitCount:(long long)a0;
- (void)publish;
- (void)setPausable:(BOOL)a0;
- (void)setCancellable:(BOOL)a0;
- (void)setPrioritizable:(BOOL)a0;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (void)prioritize;
- (void)setCompletedUnitCount:(long long)a0;
- (void)unpublish;
- (void)setEstimatedTimeRemaining:(id)a0;
- (void)dealloc;
- (void)resignCurrent;
- (void)setByteCompletedCount:(id)a0;
- (id)throughput;
- (void)setFileOperationKind:(id)a0;
- (void)setByteTotalCount:(id)a0;
- (void)setPausingHandler:(id /* block */)a0;
- (id)_initWithForwarder:(id)a0 values:(id)a1 isOld:(BOOL)a2;
- (double)fractionCompleted;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)fileURL;
- (id)estimatedTimeRemaining;
- (void)setPrioritizationHandler:(id /* block */)a0;
- (void)_setRemoteValues:(id)a0 forKeys:(id)a1;
- (void)_invokePublishingHandler:(id /* block */)a0;
- (void)_setRemoteUserInfoValue:(id)a0 forKey:(id)a1;
- (void)pause;
- (void)setThroughput:(id)a0;
- (id)fileTotalCount;
- (id)byteTotalCount;
- (void)setKind:(id)a0;
- (void)_acknowledgeWithSuccess:(BOOL)a0;
- (void)setFileCompletedCount:(id)a0;
- (void)_invokeUnpublishingHandler;
- (void)setLocalizedDescription:(id)a0;
- (void)acknowledgeWithSuccess:(BOOL)a0;
- (id)fileOperationKind;
- (void)resume;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)setFileTotalCount:(id)a0;
- (id)fileCompletedCount;
- (id)byteCompletedCount;

@end
