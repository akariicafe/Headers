@interface PLSubmissionFilePLL : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (id)fileType;
- (BOOL)copyAndPrepareLog;
- (void)generateSubmissionTagForCurrentLog;
- (void)prepareDatabaseAtPath:(id)a0;
- (id)updateSubmissionTagWithConnection:(id)a0;
- (void)trimTablesForAppResumeTelemetry:(id)a0;
- (id)appResumeTablesToTrim;

@end
