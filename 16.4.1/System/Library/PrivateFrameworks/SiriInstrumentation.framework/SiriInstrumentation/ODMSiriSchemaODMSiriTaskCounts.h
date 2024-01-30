@class NSData;

@interface ODMSiriSchemaODMSiriTaskCounts : SISchemaInstrumentationMessage {
    struct { unsigned char completedSiriTaskCount : 1; unsigned char failedSiriTaskCount : 1; unsigned char cancelledSiriTaskCount : 1; unsigned char completedUITaskCount : 1; } _has;
}

@property (nonatomic) unsigned int completedSiriTaskCount;
@property (nonatomic) BOOL hasCompletedSiriTaskCount;
@property (nonatomic) unsigned int failedSiriTaskCount;
@property (nonatomic) BOOL hasFailedSiriTaskCount;
@property (nonatomic) unsigned int cancelledSiriTaskCount;
@property (nonatomic) BOOL hasCancelledSiriTaskCount;
@property (nonatomic) unsigned int completedUITaskCount;
@property (nonatomic) BOOL hasCompletedUITaskCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteCancelledSiriTaskCount;
- (void)deleteCompletedSiriTaskCount;
- (void)deleteCompletedUITaskCount;
- (void)deleteFailedSiriTaskCount;

@end
