@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)initWithConfig:(id)a0;
- (void)submit;
- (id)fileExtension;
- (id)fileType;
- (BOOL)copyAndPrepareLog;
- (id)getListOfRequiredBDCFiles;

@end
