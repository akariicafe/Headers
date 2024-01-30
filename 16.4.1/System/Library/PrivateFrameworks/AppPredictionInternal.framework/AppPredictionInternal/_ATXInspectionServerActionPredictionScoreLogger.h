@class NSMutableDictionary;

@interface _ATXInspectionServerActionPredictionScoreLogger : _ATXInspectionServerPredictionScoreLogger {
    NSMutableDictionary *_actionMetaDataItems;
}

- (id)init;
- (void).cxx_destruct;
- (id)actionMetaDataItems;
- (void)storeMetaDataFromActionContainerForKey:(id)a0 actionContainer:(id)a1;

@end
