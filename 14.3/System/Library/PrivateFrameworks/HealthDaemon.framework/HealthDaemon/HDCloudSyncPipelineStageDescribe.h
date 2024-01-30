@interface HDCloudSyncPipelineStageDescribe : HDCloudSyncPipelineStage {
    id /* block */ _descriptionHandler;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)_cloudSyncContainerDescriptionFromCloudState:(id)a0 configuration:(id)a1;
- (id)_descriptionForContainer:(id)a0 configuration:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 descriptionHandler:(id /* block */)a2;

@end
