@class NSMutableDictionary;

@interface _ATXInspectionServerActionPredictionScoreLogger : _ATXInspectionServerPredictionScoreLogger {
    NSMutableDictionary *_actionMetaDataItems;
}

- (void).cxx_destruct;
- (id)init;
- (void)storeMetaDataFromActionContainerForKey:(id)a0 actionContainer:(id)a1;
- (id)actionMetaDataItems;

@end
