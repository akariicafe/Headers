@interface BookmarksDatabaseHealthReporter : NSObject {
    double _lastReportTimeInterval;
}

- (BOOL)_shouldReportDatabaseHealth;
- (id)_userDefaults;
- (void)reportDatabaseHealth;

@end
