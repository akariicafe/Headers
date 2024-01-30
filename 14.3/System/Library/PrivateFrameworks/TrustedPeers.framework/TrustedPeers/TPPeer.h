@class TPPeerPermanentInfo, NSString, NSSet, TPPeerStableInfo, NSData, TPPeerDynamicInfo;

@interface TPPeer : NSObject

@property (retain, nonatomic) TPPeerPermanentInfo *permanentInfo;
@property (retain, nonatomic) TPPeerStableInfo *stableInfo;
@property (retain, nonatomic) TPPeerDynamicInfo *dynamicInfo;
@property (readonly, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSData *wrappedPrivateKeys;
@property (readonly, nonatomic) NSSet *trustedPeerIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithPermanentInfo:(id)a0;
- (long long)updateStableInfo:(id)a0;
- (long long)updateDynamicInfo:(id)a0;

@end
