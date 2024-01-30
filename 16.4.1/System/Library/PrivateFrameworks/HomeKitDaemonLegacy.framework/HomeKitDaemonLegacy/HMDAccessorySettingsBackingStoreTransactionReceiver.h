@class NSString;
@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate;

@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject <HMDBackingStoreObjectProtocol>

@property (weak) id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
