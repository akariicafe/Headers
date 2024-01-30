@class NSArray, NSData;

@interface SISchemaActiveStatus : PBCodable {
    struct { unsigned char carPlayActiveWithin24Hours : 1; } _has;
}

@property (copy, nonatomic) NSArray *audioDevicesActiveWithin24Hours;
@property (nonatomic) BOOL carPlayActiveWithin24Hours;
@property (nonatomic) BOOL hasCarPlayActiveWithin24Hours;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addAudioDevicesActiveWithin24Hours:(id)a0;
- (void)clearAudioDevicesActiveWithin24Hours;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)a0;

@end
