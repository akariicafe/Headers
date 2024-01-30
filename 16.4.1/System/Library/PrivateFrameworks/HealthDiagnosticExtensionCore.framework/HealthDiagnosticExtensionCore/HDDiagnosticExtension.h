@class NSURL, NSMutableString;

@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate> {
    double _captureStartTime;
    int _contentProtectionNotifyToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _logLock;
}

@property (readonly, nonatomic) BOOL allowsSensitiveAttachments;
@property (retain, nonatomic) NSMutableString *collectionLog;
@property (readonly, copy, nonatomic) NSURL *temporaryDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (id)attachmentsForParameters:(id)a0;
- (void)_log:(id)a0;
- (void)_beginMonitoringForContentProtectionStatus;
- (void)diagnosticOperation:(id)a0 logMessage:(id)a1;
- (BOOL)_captureLog;
- (id)_currentProtectionStateString;
- (void)_endMonitoringForContentProtectionStatus;
- (id)_generateTemporaryAttachmentDirectory;

@end
