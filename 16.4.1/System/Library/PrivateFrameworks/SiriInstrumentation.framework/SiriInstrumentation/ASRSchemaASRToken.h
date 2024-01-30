@class NSString, NSData;

@interface ASRSchemaASRToken : SISchemaInstrumentationMessage {
    struct { unsigned char linkIndex : 1; unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; unsigned char appendSpaceAfter : 1; unsigned char silenceStartTimeInNs : 1; unsigned char confidence : 1; unsigned char isAutoPunctuation : 1; unsigned char isModifiedByAutoPunctuation : 1; unsigned char graphCost : 1; unsigned char acousticCost : 1; } _has;
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
@property (copy, nonatomic) NSString *punctuationText;
@property (nonatomic) BOOL hasPunctuationText;
@property (nonatomic) BOOL isAutoPunctuation;
@property (nonatomic) BOOL hasIsAutoPunctuation;
@property (nonatomic) BOOL isModifiedByAutoPunctuation;
@property (nonatomic) BOOL hasIsModifiedByAutoPunctuation;
@property (nonatomic) double graphCost;
@property (nonatomic) BOOL hasGraphCost;
@property (nonatomic) double acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
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
- (void)deleteGraphCost;
- (void)deleteLinkIndex;
- (void)deleteAcousticCost;
- (void)deleteAppendSpaceAfter;
- (void)deleteConfidence;
- (void)deleteEndTimeInNs;
- (void)deleteIsAutoPunctuation;
- (void)deleteIsModifiedByAutoPunctuation;
- (void)deletePunctuationText;
- (void)deleteSilenceStartTimeInNs;
- (void)deleteStartTimeInNs;

@end
