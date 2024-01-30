@class NSString;

@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying> {
    struct { unsigned char testCondition : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperimentIdentifier;
@property (retain, nonatomic) NSString *experimentIdentifier;
@property (nonatomic) BOOL hasTestCondition;
@property (nonatomic) long long testCondition;

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

@end
