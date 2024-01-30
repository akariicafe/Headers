@interface PLSubmissionFileCE : PLSubmissionFile

- (id)fileType;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (BOOL)copyAndPrepareLog;
- (id)getCESQLFile;

@end
