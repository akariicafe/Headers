@class NSURL, NSString;
@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>

@property (retain, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (copy, nonatomic) NSString *instructordBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)fetchTransportWithCompletion:(id /* block */)a0;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 classroomAppBundleURL:(id)a1;
- (id)initWithStudentDaemonProxy:(id)a0 classroomAppBundleURL:(id)a1 instructordBundleIdentifier:(id)a2;
- (void)fetchTransportOperationDidFinish:(id)a0 completion:(id /* block */)a1;

@end
