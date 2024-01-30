@class NSURL, NSMutableString, NSObject;
@protocol OS_dispatch_queue;

@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate> {
    double _captureStartTime;
    int _contentProtectionNotifyToken;
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (readonly, nonatomic) BOOL allowsSensitiveAttachments;
@property (retain, nonatomic) NSMutableString *collectionLog;
@property (readonly, copy, nonatomic) NSURL *temporaryDirectoryURL;

- (void)_log:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)attachmentsForParameters:(id)a0;
- (id)_generateTemporaryAttachmentDirectory;
- (void)_beginMonitoringForContentProtectionStatus;
- (void)_endMonitoringForContentProtectionStatus;
- (BOOL)_captureLog;
- (id)_currentProtectionStateString;
- (void)_logQueue_log:(id)a0 timestamp:(double)a1;
- (void)diagnosticOperation:(id)a0 logMessage:(id)a1;

@end
