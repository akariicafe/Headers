@class NSData, NSString, CKDPShare, CKDPDateStatistics, CKDPRecordChainParent, CKDPRecordStableUrl, CKDPShareIdentifier, NSMutableArray, CKDPRecordType, CKDPIdentifier, CKDPProtectionInfo, CKDPRecordIdentifier;

@interface CKDPRecord : PBCodable <NSCopying> {
    struct { unsigned char permission : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasCreatedBy;
@property (retain, nonatomic) CKDPIdentifier *createdBy;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) BOOL hasModifiedBy;
@property (retain, nonatomic) CKDPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (readonly, nonatomic) BOOL hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) int permission;
@property (readonly, nonatomic) BOOL hasShareInfo;
@property (retain, nonatomic) CKDPShare *shareInfo;
@property (readonly, nonatomic) BOOL hasChainPrivateKey;
@property (retain, nonatomic) NSData *chainPrivateKey;
@property (readonly, nonatomic) BOOL hasChainProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo;
@property (readonly, nonatomic) BOOL hasChainParent;
@property (retain, nonatomic) CKDPRecordChainParent *chainParent;
@property (readonly, nonatomic) BOOL hasStableUrl;
@property (retain, nonatomic) CKDPRecordStableUrl *stableUrl;
@property (retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs;
@property (readonly, nonatomic) BOOL hasZoneishMasterKeyId;
@property (retain, nonatomic) NSData *zoneishMasterKeyId;

+ (Class)fieldsType;
+ (Class)conflictLoserEtagsType;
+ (id)recordFromData:(id)a0;
+ (Class)pluginFieldsType;
+ (Class)tombstonedPublicKeyIDsType;

- (id)fieldForKey:(id)a0;
- (void)addTombstonedPublicKeyIDs:(id)a0;
- (void)clearPluginFields;
- (id)dataRepresentation;
- (void)_inflateFieldsFromData:(id)a0;
- (id)fieldData;
- (void)addFields:(id)a0;
- (void)clearConflictLoserEtags;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)addConflictLoserEtags:(id)a0;
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearFields;
- (unsigned long long)fieldsCount;
- (id)permissionAsString:(int)a0;
- (int)StringAsPermission:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addPluginFields:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)tombstonedPublicKeyIDsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (void)clearTombstonedPublicKeyIDs;
- (unsigned long long)hash;
- (id)_permissionAsString;
- (id)dictionaryRepresentation;
- (unsigned long long)conflictLoserEtagsCount;
- (unsigned long long)pluginFieldsCount;

@end
