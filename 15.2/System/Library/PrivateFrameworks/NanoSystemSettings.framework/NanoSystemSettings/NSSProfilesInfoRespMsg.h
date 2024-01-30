@class NSSProfilesInfoRespMsgProfileInfo, NSMutableArray;

@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMdmProfile;
@property (retain, nonatomic) NSSProfilesInfoRespMsgProfileInfo *mdmProfile;
@property (retain, nonatomic) NSMutableArray *configProfiles;

+ (Class)configProfileType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addConfigProfile:(id)a0;
- (unsigned long long)configProfilesCount;
- (void)clearConfigProfiles;
- (id)configProfileAtIndex:(unsigned long long)a0;

@end
