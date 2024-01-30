@class NSString;
@protocol PSYSyncStateObserverInterface;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface>

@property (weak, nonatomic) id<PSYSyncStateObserverInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)didUpdateSyncForPairingID:(id)a0;
- (void).cxx_destruct;

@end
