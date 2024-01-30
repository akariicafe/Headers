@class NSString, NSMutableArray, NSData;

@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasPackage;
@property (retain, nonatomic) NSString *package;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasCompatibilityVersion;
@property (retain, nonatomic) NSString *compatibilityVersion;
@property (retain, nonatomic) NSMutableArray *objectTypeIdentifiers;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;
@property (readonly, nonatomic) BOOL hasSummaryData;
@property (retain, nonatomic) NSData *summaryData;

+ (Class)authorizationCategoriesType;
+ (Class)objectTypeIdentifiersType;

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
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (void)addAuthorizationCategories:(id)a0;
- (void)addObjectTypeIdentifiers:(id)a0;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAuthorizationCategories;
- (void)clearObjectTypeIdentifiers;
- (id)objectTypeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)objectTypeIdentifiersCount;

@end
