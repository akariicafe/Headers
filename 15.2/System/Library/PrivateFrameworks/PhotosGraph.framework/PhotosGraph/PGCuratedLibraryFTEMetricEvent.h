@class NSString, NSDictionary, NSDate;

@interface PGCuratedLibraryFTEMetricEvent : PGAbstractMetricEvent {
    long long _librarySizeRange;
    NSDate *_migrationDate;
    NSString *_identifier;
    NSDictionary *_payload;
}

- (id)payload;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithLibrarySizeRange:(long long)a0 migrationDate:(id)a1;

@end
