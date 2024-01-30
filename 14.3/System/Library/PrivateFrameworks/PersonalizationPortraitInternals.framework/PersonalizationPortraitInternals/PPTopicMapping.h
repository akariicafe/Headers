@class NSString, MLModel;

@interface PPTopicMapping : NSObject {
    NSString *_mappingId;
    MLModel *_topicModel;
    MLModel *_locationModel;
    MLModel *_entityModel;
    MLModel *_unmappingModel;
    MLModel *_activationModel;
    MLModel *_unmappingActivationModel;
}

+ (id)_renamePreviousRecord:(id)a0;
+ (BOOL)_modelExists:(id)a0;
+ (id)_fetchNumberedListOfModels:(id)a0;

- (void).cxx_destruct;
- (id)_qidForInteger:(long long)a0;
- (long long)_integerForQID:(id)a0;
- (id)initWithMappingId:(id)a0;
- (id)initWithModels:(id)a0 entityModel:(id)a1 locationModel:(id)a2 unmappingModel:(id)a3 activationModel:(id)a4 unmappingActivationModel:(id)a5 mappingId:(id)a6;
- (id)_forwardMappingPass:(id)a0 features:(id)a1 record:(id)a2 previousRecord:(id)a3 stop:(BOOL *)a4 error:(id *)a5;
- (id)mappedTopics:(id *)a0;
- (id)unmappedTopics:(id)a0;

@end
