@class NSString, NSMutableArray;

@interface HDCloudSyncCodableSharedSummaryAuthorizationRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;

+ (Class)authorizationCategoriesType;

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
- (void)addAuthorizationCategories:(id)a0;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;

@end
