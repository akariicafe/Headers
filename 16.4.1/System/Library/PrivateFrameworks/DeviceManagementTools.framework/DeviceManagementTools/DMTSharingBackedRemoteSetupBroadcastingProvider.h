@class NSString, NSObject;
@protocol DMTRemoteSetupBroadcasting;

@interface DMTSharingBackedRemoteSetupBroadcastingProvider : NSObject <DMTRemoteSetupBroadcastingProvider>

@property (readonly, nonatomic) NSObject<DMTRemoteSetupBroadcasting> *broadcaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
