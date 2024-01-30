@class NSArray;
@protocol _HMTelevisionProfileDelegate;

@interface _HMTelevisionProfile : _HMAccessoryProfile

@property (retain) NSArray *mediaSourceDisplayOrder;
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;
@property (weak) id<_HMTelevisionProfileDelegate> delegate;

- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void).cxx_destruct;
- (void)_handleSourceDisplayOrderUpdated:(id)a0;
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)a0;
- (void)_registerNotificationHandlers;
- (id)initWithTelevisionService:(id)a0 linkedServices:(id)a1;
- (BOOL)isMediaSourceDisplayOrderModifiable;
- (void)updateMediaSourceDisplayOrder:(id)a0 completionHandler:(id /* block */)a1;

@end
