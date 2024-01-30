@class NSString;

@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying> {
    struct { unsigned char operationGroupTriggered : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) BOOL hasOperationGroupTriggered;
@property (nonatomic) BOOL operationGroupTriggered;

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

@end
