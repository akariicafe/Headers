@class NSString, PLSubmissionConfig;

@interface PLSubmissionFile : NSObject

@property (retain) PLSubmissionConfig *taskingConfig;
@property (retain) NSString *directory;
@property (retain) NSString *fileName;
@property BOOL iCloudUploadEnabled;

- (id)fileType;
- (id)filePath;
- (void)submit;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)fileExtension;
- (BOOL)createTagFileWithPath:(id)a0 withInfo:(id)a1;
- (void)cleanupTmpDirectory;
- (BOOL)createTagFileWithPath:(id)a0;
- (void)decorateFile;
- (void)decorateFileAtPath:(id)a0;
- (void)logSubmissionResultToCAWithErrorType:(int)a0 withFileType:(id)a1 withOverrideKeys:(id)a2;
- (void)setFileNameWithSubmissionType:(id)a0 withID:(id)a1;
- (int)submitLogToDAWithBugType:(id)a0;
- (void)submitLogToiCloudWithCompress:(BOOL)a0;

@end
