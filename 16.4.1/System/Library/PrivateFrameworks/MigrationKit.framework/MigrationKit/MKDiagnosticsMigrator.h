@class NSString;

@interface MKDiagnosticsMigrator : MKMigrator {
    NSString *_basePath;
    NSString *_performanceMetricsPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)pathForPerformanceMetrics;
- (void)saveData:(id)a0 fileName:(id)a1;
- (id)saveData:(id)a0 toFile:(id)a1;
- (void)savePerformanceMetrics:(id)a0;

@end
