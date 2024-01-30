@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (id)getFileList;

@end
