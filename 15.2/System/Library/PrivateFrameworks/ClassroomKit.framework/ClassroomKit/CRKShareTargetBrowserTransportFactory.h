@interface CRKShareTargetBrowserTransportFactory : NSObject

- (void)makeStudentdTransportWithCompletion:(id /* block */)a0;
- (void)makeInstructordTransportWithCompletion:(id /* block */)a0;
- (id)makeStudentdTransportProvider;
- (id)makeInstructordTransportProvider;

@end
