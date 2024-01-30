@class NSString, NSObject, CRKNonCatalystStudentDaemonProxy;
@protocol OS_dispatch_queue, CRKConfigurationSource;

@interface CRKStudentdXPCProfileConfigurationSource : NSObject <CRKConfigurationSource> {
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    id<CRKConfigurationSource> mPlaceholderFileConfigurationSource;
}

@property (readonly, nonatomic) CRKNonCatalystStudentDaemonProxy *studentDaemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0;
- (void)fetchConfiguration:(id /* block */)a0;
- (BOOL)isStudentdInstalled;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
