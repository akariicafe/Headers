@class TTSSchemaTTSVoiceContext, NSData, SISchemaUUID;

@interface TTSSchemaTTSRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char inputTextLength : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *requestedVoiceContext;
@property (nonatomic) BOOL hasRequestedVoiceContext;
@property (nonatomic) int inputTextLength;
@property (nonatomic) BOOL hasInputTextLength;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
