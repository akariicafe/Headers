@class NSSProfilesInfoRespMsgProfileInfo, NSMutableArray;

@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMdmProfile;
@property (retain, nonatomic) NSSProfilesInfoRespMsgProfileInfo *mdmProfile;
@property (retain, nonatomic) NSMutableArray *configProfiles;

+ (Class)configProfileType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addConfigProfile:(id)a0;
- (void)clearConfigProfiles;
- (id)configProfileAtIndex:(unsigned long long)a0;
- (unsigned long long)configProfilesCount;

@end
