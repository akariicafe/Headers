@class NSString;

@interface ACHCodableEarnedInstance : PBCodable <NSCopying> {
    struct { unsigned char createdDate : 1; unsigned char creatorDevice : 1; unsigned char value : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (readonly, nonatomic) BOOL hasEarnedDateComponents;
@property (retain, nonatomic) NSString *earnedDateComponents;
@property (nonatomic) BOOL hasCreatedDate;
@property (nonatomic) double createdDate;
@property (nonatomic) BOOL hasCreatorDevice;
@property (nonatomic) long long creatorDevice;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (readonly, nonatomic) BOOL hasValueUnitString;
@property (retain, nonatomic) NSString *valueUnitString;

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
