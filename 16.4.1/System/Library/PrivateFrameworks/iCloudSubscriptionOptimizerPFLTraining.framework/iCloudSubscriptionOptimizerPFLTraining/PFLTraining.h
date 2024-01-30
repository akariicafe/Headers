@interface PFLTraining : NSObject

- (id)runTask:(id)a0 recordSet:(id)a1 error:(id *)a2;
- (id)createDataSourceForRecipe:(id)a0 attachments:(id)a1 recordDatas:(id)a2 recordInfos:(id)a3 error:(id *)a4;
- (id)createEvaluatorForModelType:(id)a0 newAPI:(BOOL)a1 error:(id *)a2;
- (id)loadRecordsForRecordSet:(id)a0;
- (id)taskResultFromDict:(id)a0 newAPI:(BOOL)a1;

@end
