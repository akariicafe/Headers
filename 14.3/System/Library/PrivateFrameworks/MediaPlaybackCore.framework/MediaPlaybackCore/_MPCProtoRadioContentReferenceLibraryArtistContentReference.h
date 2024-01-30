@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <NSCopying> {
    struct { unsigned char representativeItemCloudID : 1; unsigned char storeAdamID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic) BOOL hasRepresentativeItemCloudID;
@property (nonatomic) long long representativeItemCloudID;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) long long storeAdamID;

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
