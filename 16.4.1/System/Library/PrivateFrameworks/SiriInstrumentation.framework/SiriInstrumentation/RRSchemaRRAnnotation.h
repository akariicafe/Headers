@class NSData;

@interface RRSchemaRRAnnotation : SISchemaInstrumentationMessage {
    struct { unsigned char name : 1; unsigned char annotationAddedTimestampInSeconds : 1; } _has;
}

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned long long annotationAddedTimestampInSeconds;
@property (nonatomic) BOOL hasAnnotationAddedTimestampInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAnnotationAddedTimestampInSeconds;
- (void)deleteName;

@end
