@class NSString, PLSubmissionConfig;

@interface PLSubmissionFile : NSObject

@property (retain) PLSubmissionConfig *taskingConfig;
@property (retain) NSString *directory;
@property (retain) NSString *fileName;
@property BOOL iCloudUploadEnabled;

- (id)fileType;
- (id)fileExtension;
- (id)filePath;
- (void)submit;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setFileNameWithSubmissionType:(id)a0 withID:(id)a1;
- (void)decorateFileAtPath:(id)a0;
- (BOOL)createTagFileWithPath:(id)a0 withInfo:(id)a1;
- (int)submitLogToDAWithBugType:(id)a0;
- (void)logSubmissionResultToAggdWithErrorType:(int)a0 withFileType:(id)a1 withOverrideKeys:(id)a2;
- (void)decorateFile;
- (BOOL)createTagFileWithPath:(id)a0;
- (void)submitLogToiCloudWithCompress:(BOOL)a0;
- (void)cleanupTmpDirectory;

@end
