@interface PLSubmissionFileMSS : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (id)fileType;
- (BOOL)copyAndPrepareLog;
- (BOOL)flushMicrostackshots;
- (id)getFileList;

@end
