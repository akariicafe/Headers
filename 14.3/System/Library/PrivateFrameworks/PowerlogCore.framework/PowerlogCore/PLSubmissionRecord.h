@class NSString, NSDictionary;

@interface PLSubmissionRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *tagUUID;
@property (retain) NSString *filePath;
@property (retain) NSString *ckFileDirPath;
@property (retain) NSString *daFileDirPath;
@property (retain) NSDictionary *tagConfig;
@property BOOL inSubmission;

+ (id)getDASubmissionDirPathForTag:(id)a0;
+ (id)getCKSubmissionDirPathForTag:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCKFilePath:(id)a0 tagUUID:(id)a1 tagConfig:(id)a2;

@end
