@class NSMutableDictionary, NSString, CAMNebulaDaemonProxyManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CAMIrisVideoControllerDelegate;

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue;
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (readonly, nonatomic) NSMutableArray *_jobsToBeSent;
@property (readonly, nonatomic) NSMutableDictionary *_pendingJobs;
@property (readonly, weak, nonatomic) id<CAMIrisVideoControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stillImageRequestDidCompleteCapture:(id)a0 error:(id)a1;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)a0;
- (void)stillImageRequest:(id)a0 didCompleteVideoCaptureWithResult:(id)a1;
- (void).cxx_destruct;
- (void)_notifyDelegateOfVideoLocalPersistenceResult:(id)a0 forVideoPersistenceUUID:(id)a1;
- (void)_submitJob:(id)a0;
- (id)initWithNebulaDaemonProxyManager:(id)a0 delegate:(id)a1;
- (BOOL)isWaitingOnNebuladForRequest:(id)a0;
- (BOOL)shouldHandleLivePhotoRenderingForRequest:(id)a0;

@end
