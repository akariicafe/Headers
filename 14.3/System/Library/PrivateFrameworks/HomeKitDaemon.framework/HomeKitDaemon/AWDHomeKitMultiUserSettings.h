@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {
    struct { unsigned char isOwner : 1; } _has;
}

@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;
@property (retain, nonatomic) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths;

+ (Class)homeKitMultiUserSettingsValuesByKeyPathType;

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
- (void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)a0;
- (unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
- (void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
- (id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)a0;

@end
