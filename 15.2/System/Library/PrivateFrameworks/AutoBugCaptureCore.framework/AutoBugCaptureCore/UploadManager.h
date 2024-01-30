@class NSString, NSMutableArray;

@interface UploadManager : NSObject <UploadSessionDelegate> {
    NSMutableArray *_uploadSessions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)reportFailureAWDMetricWithIdentifier:(id)a0 radar:(long long)a1 urgency:(long long)a2 requestTime:(id)a3 preflightStatus:(short)a4 userConsentStatus:(short)a5 apnsIdentifier:(unsigned long long)a6 fileInfo:(id)a7;
- (void)uploadFiles:(id)a0 toRadar:(id)a1 identifier:(id)a2 urgency:(long long)a3 extraHTTPHeaders:(id)a4 context:(id)a5;
- (void)uploadSessionFailed:(id)a0;
- (void)uploadSessionCompleted:(id)a0;
- (void)uploadFiles:(id)a0 toURL:(id)a1 toRadar:(id)a2 identifier:(id)a3 urgency:(long long)a4 extraHTTPHeaders:(id)a5 context:(id)a6;
- (void)reportAWDMetricForUploadSession:(id)a0 requestState:(short)a1 preflightStatus:(short)a2 userConsentStatus:(short)a3;
- (void)uploadFiles:(id)a0 to:(id)a1 identifier:(id)a2 urgency:(long long)a3 extraHTTPHeaders:(id)a4 context:(id)a5;

@end
