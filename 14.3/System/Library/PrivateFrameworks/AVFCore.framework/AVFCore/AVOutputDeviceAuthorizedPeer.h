@class NSString, NSData, AVOutputDeviceAuthorizedPeerInternal;

@interface AVOutputDeviceAuthorizedPeer : NSObject {
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) BOOL hasAdministratorPrivileges;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithID:(id)a0 publicKey:(id)a1 hasAdministratorPrivileges:(BOOL)a2;
- (BOOL)isEqual:(id)a0;

@end
