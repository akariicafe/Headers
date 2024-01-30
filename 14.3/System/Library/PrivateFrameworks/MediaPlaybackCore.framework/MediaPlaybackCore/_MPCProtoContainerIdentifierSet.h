@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {
    struct { unsigned char cloudID : 1; unsigned char delegateInfoID : 1; unsigned char storeAdamID : 1; } _has;
}

@property (nonatomic) BOOL hasDelegateInfoID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) long long storeAdamID;
@property (readonly, nonatomic) BOOL hasStorePlaylistGlobalID;
@property (retain, nonatomic) NSString *storePlaylistGlobalID;
@property (readonly, nonatomic) BOOL hasStorePlaylistVersionHash;
@property (retain, nonatomic) NSString *storePlaylistVersionHash;
@property (nonatomic) BOOL hasCloudID;
@property (nonatomic) long long cloudID;
@property (readonly, nonatomic) BOOL hasCloudCollectionID;
@property (retain, nonatomic) NSString *cloudCollectionID;
@property (readonly, nonatomic) BOOL hasRadioStationID;
@property (retain, nonatomic) NSString *radioStationID;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryID;
@property (retain, nonatomic) NSString *cloudUniversalLibraryID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
