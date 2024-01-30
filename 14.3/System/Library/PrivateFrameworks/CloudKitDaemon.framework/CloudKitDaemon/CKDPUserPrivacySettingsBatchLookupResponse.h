@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *containerPrivacySettings;

+ (Class)containerPrivacySettingsType;

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
- (void)addContainerPrivacySettings:(id)a0;
- (unsigned long long)containerPrivacySettingsCount;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)a0;

@end
