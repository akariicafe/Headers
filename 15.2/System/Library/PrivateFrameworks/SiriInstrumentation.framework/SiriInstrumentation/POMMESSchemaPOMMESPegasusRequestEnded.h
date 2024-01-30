@class POMMESSchemaPOMMESPegasusResponseServerDrivenContext, NSString, NSData, POMMESSchemaPOMMESPegasusResponseClientDrivenContext;

@interface POMMESSchemaPOMMESPegasusRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char confidenceScore : 1; unsigned char payloadSizeInKB : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) BOOL hasPayloadSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseServerDrivenContext *serverDriven;
@property (nonatomic) BOOL hasServerDriven;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusResponseClientDrivenContext *clientDriven;
@property (nonatomic) BOOL hasClientDriven;
@property (copy, nonatomic) NSString *pegasusDomain;
@property (nonatomic) BOOL hasPegasusDomain;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
