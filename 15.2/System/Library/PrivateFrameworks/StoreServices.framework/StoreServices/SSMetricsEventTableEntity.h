@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (id)reportingCanaryIdentifier;
- (void).cxx_destruct;
- (id)reportingDictionary;
- (void)dealloc;
- (id)reportingJSON;

@end
