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

+ (Class)publicKeysType;
+ (id)options;
+ (Class)pluginFieldsType;

- (id)publicKeysAtIndex:(unsigned long long)a0;
- (void)clearPublicKeys;
- (unsigned int)requestTypeCode;
- (void)clearPluginFields;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)addPluginFields:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addPublicKeys:(id)a0;
- (unsigned long long)publicKeysCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)pluginFieldsCount;

@end
