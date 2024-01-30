@class NSURL, NSString;
@protocol CRKTransportProviding;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding> {
    id<CRKTransportProviding> mBaseProvider;
}

@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (copy, nonatomic) NSString *instructordBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)fetchTransportWithCompletion:(id /* block */)a0;
- (id)initWithStudentDaemonProxy:(id)a0;
- (id)initWithStudentDaemonProxy:(id)a0 classroomAppBundleURL:(id)a1;
- (id)initWithStudentDaemonProxy:(id)a0 classroomAppBundleURL:(id)a1 instructordBundleIdentifier:(id)a2;
- (id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)a0;

@end
