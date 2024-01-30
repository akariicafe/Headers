@class CKDPUserPrivacySettings, NSMutableArray;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;
@property (retain, nonatomic) NSMutableArray *applicationBundles;

+ (Class)applicationBundleType;

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
- (void)addApplicationBundle:(id)a0;
- (unsigned long long)applicationBundlesCount;
- (void)clearApplicationBundles;
- (id)applicationBundleAtIndex:(unsigned long long)a0;

@end
