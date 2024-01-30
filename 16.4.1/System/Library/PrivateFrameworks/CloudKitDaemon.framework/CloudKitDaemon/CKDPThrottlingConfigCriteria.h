@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying> {
    struct { unsigned char containerEnvironment : 1; unsigned char databaseType : 1; unsigned char operationType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasInvernessServiceName;
@property (retain, nonatomic) NSString *invernessServiceName;
@property (readonly, nonatomic) BOOL hasInvernessFunctionName;
@property (retain, nonatomic) NSString *invernessFunctionName;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;
- (int)StringAsContainerEnvironment:(id)a0;
- (id)containerEnvironmentAsString:(int)a0;

@end
