@class NSString, NPKPassSelectionFieldDetectorManager, NPKPassSelectionFieldDetectorListener;
@protocol NPKPassSelectionFieldDetectorListener, NPKRemotePassSelectionFieldDetectorListenerCoordinator;

@interface NPKPassSelectionFieldDetectorCoordinator : NSObject <NPKPassSelectionFieldDetectorManagerDelegate> {
    NPKPassSelectionFieldDetectorListener *_localFieldDetectorListener;
}

@property (readonly, nonatomic) NPKPassSelectionFieldDetectorManager *passSelectionFieldDetectorManager;
@property (readonly, nonatomic) id<NPKPassSelectionFieldDetectorListener> localFieldDetectorListener;
@property (readonly, nonatomic) id<NPKRemotePassSelectionFieldDetectorListenerCoordinator> remoteFieldDetectListenerCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNPKPassSelectionFieldDetectorManager:(id)a0 remoteFieldDetectListenerCoordinator:(id)a1;
- (void)passSelectionFieldDetectManager:(id)a0 didEnterFieldForPassWithUniqueID:(id)a1;

@end
