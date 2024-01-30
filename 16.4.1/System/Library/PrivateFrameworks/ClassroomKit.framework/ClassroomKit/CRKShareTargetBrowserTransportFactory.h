@interface CRKShareTargetBrowserTransportFactory : NSObject

- (id)makeInstructordTransportProvider;
- (void)makeInstructordTransportWithCompletion:(id /* block */)a0;
- (id)makeStudentdTransportProvider;
- (void)makeStudentdTransportWithCompletion:(id /* block */)a0;

@end
