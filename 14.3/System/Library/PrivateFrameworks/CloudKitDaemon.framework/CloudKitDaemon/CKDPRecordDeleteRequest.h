@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char participantKeyLost : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic) BOOL hasParticipantKeyLost;
@property (nonatomic) BOOL participantKeyLost;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (id)options;
+ (Class)pluginFieldsType;
+ (Class)publicKeysType;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addPluginFields:(id)a0;
- (unsigned long long)pluginFieldsCount;
- (void)clearPluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (void)addPublicKeys:(id)a0;
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (id)publicKeysAtIndex:(unsigned long long)a0;

@end
