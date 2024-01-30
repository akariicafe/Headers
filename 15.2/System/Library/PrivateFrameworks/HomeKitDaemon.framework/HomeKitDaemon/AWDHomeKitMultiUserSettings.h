@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {
    struct { unsigned char isOwner : 1; } _has;
}

@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL isOwner;
@property (retain, nonatomic) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths;

+ (Class)homeKitMultiUserSettingsValuesByKeyPathType;

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
- (void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
- (void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)a0;
- (unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
- (id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)a0;

@end
