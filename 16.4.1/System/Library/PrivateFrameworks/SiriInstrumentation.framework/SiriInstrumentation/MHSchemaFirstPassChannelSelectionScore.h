@class NSString, NSData;

@interface MHSchemaFirstPassChannelSelectionScore : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassScore : 1; } _has;
}

@property (copy, nonatomic) NSString *channelString;
@property (nonatomic) BOOL hasChannelString;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteChannelString;
- (void)deleteFirstPassScore;

@end
