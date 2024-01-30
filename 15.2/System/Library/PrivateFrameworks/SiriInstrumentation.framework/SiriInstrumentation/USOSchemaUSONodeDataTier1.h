@class NSString, NSArray, NSData;

@interface USOSchemaUSONodeDataTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; unsigned char integerPayload : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *stringPayload;
@property (nonatomic) BOOL hasStringPayload;
@property (nonatomic) int integerPayload;
@property (nonatomic) BOOL hasIntegerPayload;
@property (copy, nonatomic) NSArray *normalizedStringPayloads;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNormalizedStringPayloads:(id)a0;
- (void)clearNormalizedStringPayloads;
- (unsigned long long)normalizedStringPayloadsCount;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)a0;

@end
