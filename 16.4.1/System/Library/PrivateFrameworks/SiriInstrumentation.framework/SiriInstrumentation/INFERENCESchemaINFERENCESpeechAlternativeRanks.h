@class NSData;

@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage {
    struct { unsigned char isError : 1; unsigned char version : 1; unsigned char givenNameRank : 1; unsigned char middleNameRank : 1; unsigned char familyNameRank : 1; unsigned char fullNameRank : 1; } _has;
}

@property (nonatomic) BOOL isError;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int givenNameRank;
@property (nonatomic) BOOL hasGivenNameRank;
@property (nonatomic) unsigned int middleNameRank;
@property (nonatomic) BOOL hasMiddleNameRank;
@property (nonatomic) unsigned int familyNameRank;
@property (nonatomic) BOOL hasFamilyNameRank;
@property (nonatomic) unsigned int fullNameRank;
@property (nonatomic) BOOL hasFullNameRank;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteVersion;
- (void)deleteFamilyNameRank;
- (void)deleteFullNameRank;
- (void)deleteGivenNameRank;
- (void)deleteIsError;
- (void)deleteMiddleNameRank;

@end
