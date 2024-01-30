@class NSString, USOSchemaUSOGraph, RRSchemaRRGroupIdentifier, NSArray, NSData;

@interface RRSchemaRRAnnotatedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char saliencyScore : 1; unsigned char saliencyComputedAtTimestampInSeconds : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph;
@property (nonatomic) BOOL hasUsoGraph;
@property (copy, nonatomic) NSString *swiftClassName;
@property (nonatomic) BOOL hasSwiftClassName;
@property (retain, nonatomic) RRSchemaRRGroupIdentifier *group;
@property (nonatomic) BOOL hasGroup;
@property (copy, nonatomic) NSArray *annotations;
@property (nonatomic) float saliencyScore;
@property (nonatomic) BOOL hasSaliencyScore;
@property (nonatomic) unsigned long long saliencyComputedAtTimestampInSeconds;
@property (nonatomic) BOOL hasSaliencyComputedAtTimestampInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addAnnotations:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearAnnotations;
- (unsigned long long)annotationsCount;
- (id)annotationsAtIndex:(unsigned long long)a0;

@end
