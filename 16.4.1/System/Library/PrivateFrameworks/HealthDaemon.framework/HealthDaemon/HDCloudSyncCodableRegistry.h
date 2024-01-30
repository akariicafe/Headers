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
- (void)addDisabledOwnerIdentifiers:(id)a0;
- (void)addStores:(id)a0;
- (void)clearDisabledOwnerIdentifiers;
- (void)clearStores;
- (id)disabledOwnerIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledOwnerIdentifiersCount;
- (id)storesAtIndex:(unsigned long long)a0;
- (unsigned long long)storesCount;

@end
