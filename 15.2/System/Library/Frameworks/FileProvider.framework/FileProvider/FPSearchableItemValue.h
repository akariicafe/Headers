@class NSString, NSData;

@interface FPSearchableItemValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char timeIntervalSinceReferenceDateValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) BOOL hasTimeIntervalSinceReferenceDateValue;
@property (nonatomic) double timeIntervalSinceReferenceDateValue;
@property (readonly, nonatomic) BOOL hasNameComponents;
@property (retain, nonatomic) NSData *nameComponents;

+ (id)stringFromObject:(id)a0;
+ (id)objectFromString:(id)a0;

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
