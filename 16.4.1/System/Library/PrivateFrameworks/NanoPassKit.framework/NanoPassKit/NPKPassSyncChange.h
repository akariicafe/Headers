@class NSUUID, NSString, NSData, NPKPassSyncStateItem, NSDictionary;

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *changeUUID;
@property (retain, nonatomic) NSData *reconciledStateHash;
@property (nonatomic) unsigned long long reconciledStateVersion;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NPKPassSyncStateItem *syncStateItem;
@property (retain, nonatomic) NSData *passData;
@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSDictionary *remoteAssetsForPartialUpdate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToChange:(id)a0;
- (id)initWithChangeUUID:(id)a0 reconciledStateHash:(id)a1 reconciledStateVersion:(unsigned long long)a2 changeType:(unsigned long long)a3 uniqueID:(id)a4 syncStateItem:(id)a5 passData:(id)a6;
- (id)initWithChangeUUID:(id)a0 reconciledStateHash:(id)a1 reconciledStateVersion:(unsigned long long)a2 changeType:(unsigned long long)a3 uniqueID:(id)a4 syncStateItem:(id)a5 passData:(id)a6 baseManifestHashForPartialUpdate:(id)a7 remoteAssetsForPartialUpdate:(id)a8;
- (id)initWithProtoPassSyncChange:(id)a0;
- (BOOL)isEqualToChangeIgnoringUUID:(id)a0;
- (id)protoPassSyncChange;

@end
