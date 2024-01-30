@class NSURL, NSString;
@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>

@property (retain, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)a0;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 classroomAppBundleURL:(id)a1;
- (void)fetchTransportOperationDidFinish:(id)a0 completion:(id /* block */)a1;

@end
