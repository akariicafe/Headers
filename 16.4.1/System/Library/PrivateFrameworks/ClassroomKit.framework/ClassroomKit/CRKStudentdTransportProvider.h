@class NSString;

@interface CRKStudentdTransportProvider : NSObject <CRKTransportProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchTransportWithCompletion:(id /* block */)a0;

@end
