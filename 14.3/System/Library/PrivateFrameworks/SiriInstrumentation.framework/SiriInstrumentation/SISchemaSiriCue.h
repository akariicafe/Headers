@class NSData;

@interface SISchemaSiriCue : PBCodable {
    struct { unsigned char siriCueType : 1; } _has;
}

@property (nonatomic) int siriCueType;
@property (nonatomic) BOOL hasSiriCueType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
