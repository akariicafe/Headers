@interface PreviewsFoundation.CrashReportListener : NSObject <OSADiagnosticObserver> {
    void /* unknown type, empty encoding */ types;
    void /* unknown type, empty encoding */ state;
}

- (void).cxx_destruct;
- (id)init;
- (void)willWriteDiagnosticLog:(id)a0 logId:(id)a1 logInfo:(id)a2;
- (void)didWriteDiagnosticLog:(id)a0 logId:(id)a1 logFilePath:(id)a2 logInfo:(id)a3 error:(id)a4;

@end
