@class NSURLSession, NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;

@interface HFAccessoryDiagnosticsUploadManager : NSObject <NSURLSessionDelegate>

@property (class, readonly, nonatomic) NSString *backgroundURLSessionIdentifier;

@property (retain, nonatomic) NSMutableDictionary *diagnosticItems;
@property (retain, nonatomic) NSMutableOrderedSet *pendingIdentifiers;
@property (retain, nonatomic) NSMutableSet *failedUploadIdentifiers;
@property (retain, nonatomic) NSMutableSet *uploadedIdentifiers;
@property (retain, nonatomic) NSURLSession *backgroundSession;
@property (copy, nonatomic) id /* block */ backgroundUrlSessionCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)resumeServiceForURLSessionIdentifier:(id)a0;
- (BOOL)_didPreviouslySubmitLog:(id)a0;
- (void)_addToPendingUploads:(id)a0;
- (void)_submitNextPendingLog;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)filePathForIdentifier:(id)a0;
- (id)_nextFilenameIdentifierToProcess;
- (void)_updatePreviousLogIdentifiers:(id)a0 forKey:(id)a1;
- (void)_finalizeHandlingOfIdentifier:(id)a0;
- (void)_failAttemptToUploadCurrentIdentifier;
- (void)purgeStaleSubmittedLogs;
- (BOOL)_needsToPurgeOldLogs;
- (void)updateLastPurgeDate;
- (id)fileURLForIdentifier:(id)a0;
- (void)_cleanUpLocalFilesForIdentifier:(id)a0;
- (void)uploadDiagnosticLogUsingItem:(id)a0;
- (BOOL)_isValidFilenameIdentifier:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)willResignActive:(id)a0;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;

@end
