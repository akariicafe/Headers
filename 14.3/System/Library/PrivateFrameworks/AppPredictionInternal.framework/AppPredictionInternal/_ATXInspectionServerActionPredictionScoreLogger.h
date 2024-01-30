@class NSMutableDictionary;

@interface _ATXInspectionServerActionPredictionScoreLogger : _ATXInspectionServerPredictionScoreLogger {
    NSMutableDictionary *_actionMetaDataItems;
}

- (id)init;
- (void).cxx_destruct;
- (void)storeMetaDataFromActionContainerForKey:(id)a0 actionContainer:(id)a1;
- (id)actionMetaDataItems;

@end
