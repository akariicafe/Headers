@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (id)fileExtension;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (BOOL)copyAndPrepareLog;
- (id)getListOfRequiredBDCFiles;
- (id)getEPSQLFile;
- (id)getBDCPlistFile;

@end
