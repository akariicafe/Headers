@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (void).cxx_destruct;
- (void)dealloc;
- (id)reportingDictionary;
- (id)reportingCanaryIdentifier;
- (id)reportingJSON;

@end
