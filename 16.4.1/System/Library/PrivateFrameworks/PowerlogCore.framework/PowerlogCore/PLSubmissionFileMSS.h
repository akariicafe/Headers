@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)fileType;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (id)getFileList;

@end
