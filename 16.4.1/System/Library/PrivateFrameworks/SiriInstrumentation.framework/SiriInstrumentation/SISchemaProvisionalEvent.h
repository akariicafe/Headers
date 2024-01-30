@class NSString, NSData, SISchemaAnyEvent;

@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) SISchemaAnyEvent *anyEvent;
@property (nonatomic) BOOL hasAnyEvent;
@property (copy, nonatomic) NSString *typeId;
@property (nonatomic) BOOL hasTypeId;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (int)getAnyEventType;
- (void)deleteAnyEvent;
- (id)suppressMessageUnderConditions;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteTypeId;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteVersion;

@end
