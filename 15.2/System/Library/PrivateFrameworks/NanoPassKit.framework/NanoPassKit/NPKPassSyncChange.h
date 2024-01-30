@class NSUUID, NSString, NSData, NPKPassSyncStateItem, NSDictionary;

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *changeUUID;
@property (retain, nonatomic) NSData *reconciledStateHash;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NPKPassSyncStateItem *syncStateItem;
@property (retain, nonatomic) NSData *passData;
@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSDictionary *remoteAssetsForPartialUpdate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithProtoPassSyncChange:(id)a0;
- (id)protoPassSyncChange;
- (id)initWithChangeUUID:(id)a0 reconciledStateHash:(id)a1 changeType:(unsigned long long)a2 uniqueID:(id)a3 syncStateItem:(id)a4 passData:(id)a5 baseManifestHashForPartialUpdate:(id)a6 remoteAssetsForPartialUpdate:(id)a7;
- (id)initWithChangeUUID:(id)a0 reconciledStateHash:(id)a1 changeType:(unsigned long long)a2 uniqueID:(id)a3 syncStateItem:(id)a4 passData:(id)a5;
- (BOOL)isEqualToChangeIgnoringUUID:(id)a0;
- (BOOL)isEqualToChange:(id)a0;

@end
