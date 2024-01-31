@class NSString, NSURL, NSData, NSURLRequest;

@interface __NSCFResumableUploadState : NSObject <NSSecureCoding> {
    char _retryCounter;
    char _repeatedStreamOpenings;
    BOOL _userOverride;
    int _state;
    int _bodyType;
    long long _offset;
    NSURLRequest *_originalRequest;
    NSData *_uploadData;
    NSURL *_resumeURL;
    NSString *_draftVersion;
    long long _streamLength;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *uploadFile;

+ (id)rusWithResumeData:(id)a0 originalRequest:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResumeDataForTaskInfo;
- (BOOL)isResumable;

@end
