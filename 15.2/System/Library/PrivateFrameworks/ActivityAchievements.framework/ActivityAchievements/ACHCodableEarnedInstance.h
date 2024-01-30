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
