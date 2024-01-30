@class NSString, CHNotifyObserver;
@protocol CHCallInteractionDataSourceDelegate;

@interface CHCallInteractionInProcessDataSource : NSObject <CHCallInteractionDataSource>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) CHNotifyObserver *callInteractionObserver;
@property (retain, nonatomic) id<CHCallInteractionDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
