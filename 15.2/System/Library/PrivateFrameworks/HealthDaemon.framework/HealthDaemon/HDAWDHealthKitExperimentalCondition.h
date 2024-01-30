@class NSString;

@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying> {
    struct { unsigned char testCondition : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperimentIdentifier;
@property (retain, nonatomic) NSString *experimentIdentifier;
@property (nonatomic) BOOL hasTestCondition;
@property (nonatomic) long long testCondition;

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
