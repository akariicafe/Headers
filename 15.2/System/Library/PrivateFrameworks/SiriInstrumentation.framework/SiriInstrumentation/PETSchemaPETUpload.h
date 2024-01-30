@class PETSchemaPETMetadata, NSArray, NSData;

@interface PETSchemaPETUpload : SISchemaTopLevelUnionType {
    struct { unsigned char is_compressed : 1; } _has;
}

@property (retain, nonatomic) PETSchemaPETMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (copy, nonatomic) NSArray *aggregated_messages;
@property (copy, nonatomic) NSArray *unaggregated_messages;
@property (nonatomic) BOOL is_compressed;
@property (nonatomic) BOOL hasIs_compressed;
@property (copy, nonatomic) NSData *compressed_messages;
@property (nonatomic) BOOL hasCompressed_messages;
@property (copy, nonatomic) NSArray *trial_messages;
@property (copy, nonatomic) NSData *compressed_data;
@property (nonatomic) BOOL hasCompressed_data;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAggregated_messages:(id)a0;
- (void)addUnaggregated_messages:(id)a0;
- (void)addTrial_messages:(id)a0;
- (void)clearAggregated_messages;
- (unsigned long long)aggregated_messagesCount;
- (id)aggregated_messagesAtIndex:(unsigned long long)a0;
- (void)clearUnaggregated_messages;
- (unsigned long long)unaggregated_messagesCount;
- (id)unaggregated_messagesAtIndex:(unsigned long long)a0;
- (void)clearTrial_messages;
- (unsigned long long)trial_messagesCount;
- (id)trial_messagesAtIndex:(unsigned long long)a0;

@end
