@class NSString, IMDMessageFromStorageController;

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {
    unsigned long long _processingType;
    id _broadcaster;
    IMDMessageFromStorageController *_storageController;
    NSString *_service;
}

- (void).cxx_destruct;
- (id)initWithStorageProcessingType:(unsigned long long)a0 storageController:(id)a1 broadcaster:(id)a2 account:(id)a3;
- (id)runIndividuallyWithInput:(id)a0;

@end
