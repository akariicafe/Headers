@class NSData;

@interface ASRSchemaASRToken : SISchemaInstrumentationMessage {
    struct { unsigned char linkIndex : 1; unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; unsigned char appendSpaceAfter : 1; unsigned char silenceStartTimeInNs : 1; unsigned char confidence : 1; } _has;
}

@property (nonatomic) unsigned int linkIndex;
@property (nonatomic) BOOL hasLinkIndex;
@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL appendSpaceAfter;
@property (nonatomic) BOOL hasAppendSpaceAfter;
@property (nonatomic) unsigned long long silenceStartTimeInNs;
@property (nonatomic) BOOL hasSilenceStartTimeInNs;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
