@interface FetchLogArchivesReportGenerator : NetworkDiagnosticsReportGenerator

- (id)initWithQueue:(id)a0;
- (void)setTTLDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (void)setBaseDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;
- (void)setDefaults;
- (void)setHighVolumeLoggersDuration:(unsigned long long)a0 maximumSize:(unsigned long long)a1;

@end
