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

- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isStudentdInstalled;
- (void)fetchConfiguration:(id /* block */)a0;
- (void)setConfiguration:(id)a0 completion:(id /* block */)a1;

@end
