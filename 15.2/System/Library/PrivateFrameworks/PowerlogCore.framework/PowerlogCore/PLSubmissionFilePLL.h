@interface PLSubmissionFilePLL : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (BOOL)copyAndPrepareLog;
- (void)generateSubmissionTagForCurrentLog;
- (void)prepareDatabaseAtPath:(id)a0;
- (id)updateSubmissionTagWithConnection:(id)a0;
- (void)logSubmissionSizeToAnalytics:(unsigned long long)a0 withUncompressedSize:(unsigned long long)a1;

@end
