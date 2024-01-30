@class NSArray, NSString;

@interface _INPBConfidenceScore : PBCodable <_INPBConfidenceScore, NSSecureCoding, NSCopying> {
    struct { unsigned char aggregateScore : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float aggregateScore;
@property (nonatomic) BOOL hasAggregateScore;
@property (copy, nonatomic) NSArray *components;
@property (readonly, nonatomic) unsigned long long componentsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearComponents;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addComponents:(id)a0;
- (id)componentsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
