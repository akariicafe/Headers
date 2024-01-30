@class NSString, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char maxNumContinuousZeros : 1; unsigned char maxNumAllowedContinuousZeros : 1; unsigned char isMaxNumContinuousZerosOverThreshold : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (copy, nonatomic) NSString *phraseId;
@property (nonatomic) BOOL hasPhraseId;
@property (nonatomic) unsigned int maxNumContinuousZeros;
@property (nonatomic) BOOL hasMaxNumContinuousZeros;
@property (nonatomic) unsigned int maxNumAllowedContinuousZeros;
@property (nonatomic) BOOL hasMaxNumAllowedContinuousZeros;
@property (nonatomic) BOOL isMaxNumContinuousZerosOverThreshold;
@property (nonatomic) BOOL hasIsMaxNumContinuousZerosOverThreshold;
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
- (void)deleteIsMaxNumContinuousZerosOverThreshold;
- (void)deleteMaxNumAllowedContinuousZeros;
- (void)deleteMaxNumContinuousZeros;
- (void)deletePageNumber;
- (void)deletePhraseId;

@end
