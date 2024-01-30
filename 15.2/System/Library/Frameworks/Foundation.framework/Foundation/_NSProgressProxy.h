@protocol NSProgressPublisher;

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> _forwarder;
    BOOL _isOld;
    id /* block */ _unpublishingHandler;
}

- (void)setLocalizedDescription:(id)a0;
- (BOOL)isOld;
- (void)setPausable:(BOOL)a0;
- (void)setFileURL:(id)a0;
- (void)setCancellable:(BOOL)a0;
- (void)setPrioritizable:(BOOL)a0;
- (id)fileURL;
- (void)becomeCurrentWithPendingUnitCount:(long long)a0;
- (void)unpublish;
- (void)setTotalUnitCount:(long long)a0;
- (void)setPausingHandler:(id /* block */)a0;
- (id)throughput;
- (void)setByteCompletedCount:(id)a0;
- (void)setByteTotalCount:(id)a0;
- (void)setFileOperationKind:(id)a0;
- (id)_initWithForwarder:(id)a0 values:(id)a1 isOld:(BOOL)a2;
- (void)prioritize;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)_setRemoteUserInfoValue:(id)a0 forKey:(id)a1;
- (void)setKind:(id)a0;
- (void)_invokeUnpublishingHandler;
- (void)setThroughput:(id)a0;
- (id)fileTotalCount;
- (id)byteTotalCount;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (void)setPrioritizationHandler:(id /* block */)a0;
- (void)_setRemoteValues:(id)a0 forKeys:(id)a1;
- (void)_invokePublishingHandler:(id /* block */)a0;
- (void)_acknowledgeWithSuccess:(BOOL)a0;
- (void)setEstimatedTimeRemaining:(id)a0;
- (void)resignCurrent;
- (void)setFileCompletedCount:(id)a0;
- (id)fileOperationKind;
- (void)setFileTotalCount:(id)a0;
- (id)fileCompletedCount;
- (id)byteCompletedCount;
- (id)estimatedTimeRemaining;
- (void)pause;
- (void)acknowledgeWithSuccess:(BOOL)a0;
- (double)fractionCompleted;
- (void)resume;
- (void)setCompletedUnitCount:(long long)a0;
- (void)dealloc;
- (void)cancel;
- (void)publish;

@end
