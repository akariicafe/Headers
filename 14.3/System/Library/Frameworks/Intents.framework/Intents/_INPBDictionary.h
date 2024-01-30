@class NSArray, NSString;

@interface _INPBDictionary : PBCodable <_INPBDictionary, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pairs;
@property (readonly, nonatomic) unsigned long long pairsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pairType;

- (void)addPair:(id)a0;
- (void).cxx_destruct;
- (void)clearPairs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pairAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
