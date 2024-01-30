@class NSData;

@interface FLOWSchemaFLOWSPORTSExecution : SISchemaInstrumentationMessage {
    struct { unsigned char sportsUsecase : 1; unsigned char isSportsWatchFaceRequest : 1; unsigned char isSnippetNextCardRequest : 1; unsigned char isMachineUtterance : 1; unsigned char isDisambiguation : 1; unsigned char isLiveScoreRequest : 1; } _has;
}

@property (nonatomic) int sportsUsecase;
@property (nonatomic) BOOL hasSportsUsecase;
@property (nonatomic) BOOL isSportsWatchFaceRequest;
@property (nonatomic) BOOL hasIsSportsWatchFaceRequest;
@property (nonatomic) BOOL isSnippetNextCardRequest;
@property (nonatomic) BOOL hasIsSnippetNextCardRequest;
@property (nonatomic) BOOL isMachineUtterance;
@property (nonatomic) BOOL hasIsMachineUtterance;
@property (nonatomic) BOOL isDisambiguation;
@property (nonatomic) BOOL hasIsDisambiguation;
@property (nonatomic) BOOL isLiveScoreRequest;
@property (nonatomic) BOOL hasIsLiveScoreRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteIsDisambiguation;
- (void)deleteIsLiveScoreRequest;
- (void)deleteIsMachineUtterance;
- (void)deleteIsSnippetNextCardRequest;
- (void)deleteIsSportsWatchFaceRequest;
- (void)deleteSportsUsecase;

@end
