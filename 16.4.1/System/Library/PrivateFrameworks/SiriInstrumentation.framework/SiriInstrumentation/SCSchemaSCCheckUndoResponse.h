@class NSData;

@interface SCSchemaSCCheckUndoResponse : SISchemaInstrumentationMessage {
    struct { unsigned char undoType : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int undoType;
@property (nonatomic) BOOL hasUndoType;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)deleteUndoType;

@end
