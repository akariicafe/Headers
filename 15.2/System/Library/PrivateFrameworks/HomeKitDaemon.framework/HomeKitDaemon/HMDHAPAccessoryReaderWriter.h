@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;

@interface HMDHAPAccessoryReaderWriter : NSObject <HMDHAPAccessoryReader, HMDHAPAccessoryWriter>

@property (readonly) HMDHAPAccessoryTaskTracker *tracker;
@property (readonly, weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)submitReadRequests:(id)a0 sourceType:(unsigned long long)a1 requestMessage:(id)a2;
- (void)submitWriteRequests:(id)a0 sourceType:(unsigned long long)a1 requestMessage:(id)a2;
- (id)_defaultReadTaskForCurrentDeviceWithIdentifier:(id)a0 context:(id)a1 requests:(id)a2;
- (id)_defaultWriteTaskForCurrentDeviceWithIdentifier:(id)a0 context:(id)a1 requests:(id)a2;
- (BOOL)_cannotForwardMessage:(id)a0;
- (BOOL)_isNotResidentDevice;
- (BOOL)_isSecondaryResidentDevice;
- (BOOL)_isPrimaryResidentDevice;
- (id /* block */)_completionHandlerWithContext:(id)a0 taskIdentifier:(id)a1;

@end
