@class NSString, NSMutableArray, HDCloudSyncCodableProfileIdentifier;

@interface HDCloudSyncCodableRegistry : PBCodable <NSCopying> {
    struct { unsigned char displayNameModificationDate : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *disabledOwnerIdentifiers;
@property (retain, nonatomic) NSMutableArray *stores;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL hasDisplayFirstName;
@property (retain, nonatomic) NSString *displayFirstName;
@property (nonatomic) BOOL hasDisplayNameModificationDate;
@property (nonatomic) double displayNameModificationDate;
@property (readonly, nonatomic) BOOL hasDisplayLastName;
@property (retain, nonatomic) NSString *displayLastName;
@property (readonly, nonatomic) BOOL hasOwnerProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *ownerProfileIdentifier;
@property (readonly, nonatomic) BOOL hasSharedProfileIdentifier;
@property (retain, nonatomic) HDCloudSyncCodableProfileIdentifier *sharedProfileIdentifier;

+ (Class)disabledOwnerIdentifiersType;
+ (Class)storesType;

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
- (void)addDisabledOwnerIdentifiers:(id)a0;
- (void)addStores:(id)a0;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (void)clearDisabledOwnerIdentifiers;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)storesCount;
- (void)clearStores;
- (id)storesAtIndex:(unsigned long long)a0;

@end
