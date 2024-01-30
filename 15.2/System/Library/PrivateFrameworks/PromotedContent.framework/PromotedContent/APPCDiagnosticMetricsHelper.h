@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ primitiveCreator;
    void /* unknown type, empty encoding */ notificationOwner;
}

- (id)initWithContextIdentifier:(id)a0 promotedContentIdentifier:(id)a1 primitiveCreator:(id)a2 notificationOwner:(id)a3;
- (void)mediaPlaybackFailedWithReason:(id)a0;
- (void).cxx_destruct;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (id)init;
- (void)loadFailedWithReason:(id)a0 code:(long long)a1;
- (void)removeHandler;
- (void)templateMetricWithName:(id)a0 argument:(id)a1;

@end
