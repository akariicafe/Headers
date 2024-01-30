@class NSData;

@interface SISchemaIntercomMessageRecorded : PBCodable {
    struct { unsigned char durationInMs : 1; unsigned char isReply : 1; unsigned char disambiguationRequired : 1; unsigned char intercomTarget : 1; } _has;
}

@property (nonatomic) long long durationInMs;
@property (nonatomic) BOOL hasDurationInMs;
@property (nonatomic) BOOL isReply;
@property (nonatomic) BOOL hasIsReply;
@property (nonatomic) BOOL disambiguationRequired;
@property (nonatomic) BOOL hasDisambiguationRequired;
@property (nonatomic) int intercomTarget;
@property (nonatomic) BOOL hasIntercomTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
