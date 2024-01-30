@interface GEOAnalyticsPipelineCuratedCollectionActionOperation : GEOAnalyticsPipelineReportOperation {
    unsigned long long _actionType;
    unsigned long long _collectionId;
}

- (id)initWithSavedCollectionActionType:(unsigned long long)a0 collectionId:(unsigned long long)a1 remoteProxy:(id)a2 runQueue:(id)a3 completionQueue:(id)a4 completionBlock:(id /* block */)a5;
- (void)main;

@end
