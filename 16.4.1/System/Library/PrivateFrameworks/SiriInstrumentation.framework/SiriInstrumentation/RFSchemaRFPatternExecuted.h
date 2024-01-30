@class NSString, NSData;

@interface RFSchemaRFPatternExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char pattern : 1; unsigned char mode : 1; } _has;
}

@property (copy, nonatomic) NSString *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (nonatomic) int pattern;
@property (nonatomic) BOOL hasPattern;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasMode;
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
- (void)deletePatternId;
- (void)deleteMode;
- (void)deletePattern;

@end
