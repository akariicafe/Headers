@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *keyValues;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithNSDictionary:(id)a0;
- (void)addKeyValues:(id)a0;
- (void)clearKeyValues;
- (unsigned long long)keyValuesCount;
- (id)keyValuesAtIndex:(unsigned long long)a0;

@end
