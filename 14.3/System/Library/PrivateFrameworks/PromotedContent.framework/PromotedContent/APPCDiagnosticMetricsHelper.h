@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ primitiveCreator;
    void /* unknown type, empty encoding */ notificationOwner;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (void)loadFailedWithReason:(id)a0 code:(long long)a1;
- (void)templateMetricWithName:(id)a0 argument:(id)a1;
- (void)mediaPlaybackFailedWithReason:(id)a0;
- (id)initWithContextIdentifier:(id)a0 promotedContentIdentifier:(id)a1 primitiveCreator:(id)a2 notificationOwner:(id)a3;

@end
