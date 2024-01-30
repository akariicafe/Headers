@class NSUUID, NSString, NSURL, NSData, NSURLRequest;
@protocol NSURLSessionTaskDelegate, __NSURLSessionTaskGroupForConfiguration;

@interface __NSCFTaskForClass : NSObject {
    Class cl;
    NSURLRequest *request;
    NSUUID *uniqueIdentifier;
    NSURL *uploadFile;
    NSData *bodyData;
    id /* block */ completion;
    NSString *downloadFilePath;
    NSData *resumeData;
    id /* block */ downloadCompletion;
    id<NSURLSessionTaskDelegate> delegate;
    id<__NSURLSessionTaskGroupForConfiguration> _group;
}

- (void)dealloc;

@end
