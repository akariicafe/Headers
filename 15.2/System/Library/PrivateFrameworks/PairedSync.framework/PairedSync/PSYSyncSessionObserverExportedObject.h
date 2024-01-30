@class NSString;
@protocol PSYSyncSessionObserverInterface;

@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface>

@property (weak, nonatomic) id<PSYSyncSessionObserverInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
