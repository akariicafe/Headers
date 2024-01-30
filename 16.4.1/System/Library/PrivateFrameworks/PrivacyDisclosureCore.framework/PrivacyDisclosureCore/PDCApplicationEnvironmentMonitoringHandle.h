@class NSString, LSApplicationWorkspace, NSObject;
@protocol OS_dispatch_queue, PDCApplicationEnvironmentMonitoring;

@interface PDCApplicationEnvironmentMonitoringHandle : NSObject <PDCApplicationEnvironmentMonitoringHandle, LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace *_workspace;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak) id<PDCApplicationEnvironmentMonitoring> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
