@class NSString, NSData;

@interface SISchemaVersion : SISchemaInstrumentationMessage {
    struct { unsigned char major : 1; unsigned char minor : 1; unsigned char patch : 1; } _has;
}

@property (nonatomic) unsigned int major;
@property (nonatomic) BOOL hasMajor;
@property (nonatomic) unsigned int minor;
@property (nonatomic) BOOL hasMinor;
@property (nonatomic) unsigned int patch;
@property (nonatomic) BOOL hasPatch;
@property (copy, nonatomic) NSString *prerelease;
@property (nonatomic) BOOL hasPrerelease;
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
- (void)deleteMajor;
- (void)deleteMinor;
- (void)deletePatch;
- (void)deletePrerelease;

@end
