@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (void)dealloc;
- (id)reportingCanaryIdentifier;
- (id)reportingJSON;
- (id)reportingDictionary;
- (void).cxx_destruct;

@end
