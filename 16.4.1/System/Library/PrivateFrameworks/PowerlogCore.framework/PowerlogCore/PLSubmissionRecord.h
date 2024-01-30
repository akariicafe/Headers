@class NSString, NSUUID, NSDictionary, NSDate;

@interface PLSubmissionRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *tagUUID;
@property (readonly, nonatomic) NSUUID *configUUID;
@property (readonly, nonatomic) NSDate *configDateApplied;
@property (readonly, nonatomic) NSDate *configDateReceived;
@property (retain) NSString *filePath;
@property (retain) NSString *ckFileDirPath;
@property (retain) NSString *daFileDirPath;
@property (retain) NSDictionary *tagConfig;
@property BOOL inSubmission;

+ (id)getCKSubmissionDirPathForTag:(id)a0;
+ (id)getDASubmissionDirPathForTag:(id)a0;

- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeFileAtPath:(id)a0;
- (void).cxx_destruct;
- (void)emitAttemptEvent;
- (void)emitSuccessEvent;
- (id)initWithCKFilePath:(id)a0 tagUUID:(id)a1 tagConfig:(id)a2 configUUID:(id)a3 configDateReceived:(id)a4 configDateApplied:(id)a5;

@end
