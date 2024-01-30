@class NSString;

@interface HMDSecureRemoteSessionDefaultDataSource : NSObject <HMDSecureRemoteSessionDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSecureStreamWithPeerDevice:(id)a0 clientMode:(BOOL)a1 sessionID:(id)a2;

@end
