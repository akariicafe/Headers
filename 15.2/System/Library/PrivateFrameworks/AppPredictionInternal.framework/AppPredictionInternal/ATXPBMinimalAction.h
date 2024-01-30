@class NSString;

@interface ATXPBMinimalAction : PBCodable <NSCopying> {
    struct { unsigned char paramHash : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasActionType;
@property (retain, nonatomic) NSString *actionType;
@property (nonatomic) BOOL hasParamHash;
@property (nonatomic) unsigned long long paramHash;

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
