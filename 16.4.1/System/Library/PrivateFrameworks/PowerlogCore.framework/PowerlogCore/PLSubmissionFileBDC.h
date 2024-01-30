@interface PLSubmissionFileBDC : PLSubmissionFile

- (id)fileType;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (id)fileExtension;
- (id)getBDCPlistFile;
- (BOOL)copyAndPrepareLog;
- (id)getEPSQLFile;
- (id)getListOfRequiredBDCFiles;

@end
