@class MLModel;

@interface PPNamedEntityFilter : NSObject {
    MLModel *_model;
}

- (id)filterScoredNamedEntities:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)filterNamedEntityRecords:(id)a0;
- (id)initWithModel:(id)a0;
- (BOOL)isAcceptableRecord:(id)a0;

@end
