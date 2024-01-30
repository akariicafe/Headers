@class NSData, ASCodableCloudKitRelationship;

@interface ASCodableRelationshipContainer : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRelationship;
@property (retain, nonatomic) ASCodableCloudKitRelationship *relationship;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) BOOL hasSystemFieldsOnlyRecord;
@property (retain, nonatomic) NSData *systemFieldsOnlyRecord;
@property (readonly, nonatomic) BOOL hasRelationshipShareID;
@property (retain, nonatomic) NSData *relationshipShareID;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipShareID;
@property (retain, nonatomic) NSData *remoteRelationshipShareID;
@property (readonly, nonatomic) BOOL hasRemoteActivityShareID;
@property (retain, nonatomic) NSData *remoteActivityShareID;

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

@end
