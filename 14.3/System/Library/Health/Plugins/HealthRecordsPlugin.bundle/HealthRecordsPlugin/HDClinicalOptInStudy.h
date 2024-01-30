@class NSURLSession, NSMutableDictionary, HDProfile, NSString, HKHealthWrapMessageConfiguration, NSOperationQueue;
@protocol HDClinicalOptInStudyDelegate;

@interface HDClinicalOptInStudy : NSObject <NSURLSessionDelegate> {
    NSOperationQueue *_operationQueue;
    NSURLSession *_session;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) NSMutableDictionary *responses;
@property (readonly, nonatomic) NSMutableDictionary *inputStreams;
@property (nonatomic) BOOL readyForAnalyticsSubmission;
@property (readonly, nonatomic) NSString *authorizationKey;
@property (readonly, nonatomic) NSString *certString;
@property (readonly, nonatomic) NSString *channel;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSString *studyID;
@property (retain, nonatomic) NSString *subjectID;
@property (retain, nonatomic) NSString *subjectToken;
@property (nonatomic) struct __SecCertificate { } *certificate;
@property (retain, nonatomic) HKHealthWrapMessageConfiguration *healthWrapConfiguration;
@property (readonly, nonatomic) NSString *healthCloudDirectoryPath;
@property (weak, nonatomic) id<HDClinicalOptInStudyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)_lock_enableDataCollectionIfNecessary;
- (void)_registerDevice;
- (id)_healthCloudUploadDirectoryPath;
- (BOOL)_lock_loadCertificateWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_submitAnalyticsData:(id)a0 error:(id *)a1;
- (BOOL)cleanWithError:(id *)a0;
- (BOOL)_createDirectory:(id)a0 error:(id *)a1;
- (BOOL)triggerOptInAnalyticsDataUploadToHealthCloudWithError:(id *)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (BOOL)_lock_loadHealthWrapConfigurationWithError:(id *)a0;
- (BOOL)submitJSONAnalyticsData:(id)a0 error:(id *)a1;
- (id)_subjectIDKey;
- (id)currentSubjectID;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)_removeDirectory:(id)a0 error:(id *)a1;
- (void)enableDataCollection;
- (BOOL)_uploadSubmittedAnalyticsDataWithError:(id *)a0;
- (id)_registrationURL;
- (id)_uploadURL;
- (id)_keyValueDomain;
- (id)initWithProfile:(id)a0 environment:(long long)a1;
- (id)_subjectTokenKey;

@end
