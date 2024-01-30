@class NSObject;
@protocol DMTRemoteSetupBroadcasting;

@interface DMTSharingBackedRemoteSetupBroadcastingProvider : NSObject <DMTRemoteSetupBroadcastingProvider>

@property (readonly, nonatomic) NSObject<DMTRemoteSetupBroadcasting> *broadcaster;

@end
