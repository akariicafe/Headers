@class NSDate, NSString, NSArray, NSURLSession, NSURL, NSMutableDictionary, NSDictionary, NWPathEvaluator, NSMutableArray, NSNumber;
@protocol UploadSessionDelegate;

@interface UploadSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSURL *_uploadDestination;
    NSDictionary *_extraHTTPHeaders;
    NSURLSession *_urlSession;
    NSMutableArray *_uploadSessionTasks;
    NSMutableDictionary *_uploadSessionTaskToFileUploadInfo;
    NWPathEvaluator *_primaryPathEvaluator;
    long long _primaryInterfaceType;
}

@property (weak, nonatomic) id<UploadSessionDelegate> uploadManager;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *requestedTime;
@property (retain, nonatomic) NSDate *scheduledTime;
@property (retain, nonatomic) NSDate *completedTime;
@property (nonatomic) BOOL radarAPI;
@property (nonatomic) BOOL consentWasRequired;
@property (nonatomic) unsigned long long apnsIdentifier;
@property (retain, nonatomic) NSNumber *radarID;
@property (readonly, nonatomic) NSArray *uploadingFilesInfo;
@property (readonly, nonatomic) long long urgencyFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionConfigurationWithIdentifier:(id)a0 urgency:(long long)a1;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)uploadTaskForFileInfo:(id)a0;
- (id)destinationURLForFile:(id)a0;
- (BOOL)_allFilesUploaded;
- (id)initWithFilesToUpload:(id)a0 destination:(id)a1 urgency:(long long)a2 additionalHTTPHeaders:(id)a3;
- (void)prepareUploadSession;
- (void)startUploadSession;

@end
