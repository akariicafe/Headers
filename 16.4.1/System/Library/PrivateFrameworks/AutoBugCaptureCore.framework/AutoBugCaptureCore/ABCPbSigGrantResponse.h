@class NSString, NSMutableArray, ABCPbSigConfigWhitelist;

@interface ABCPbSigGrantResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char globalDecision : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasGlobalDecision;
@property (nonatomic) int globalDecision;
@property (readonly, nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSMutableArray *sigResponses;
@property (readonly, nonatomic) BOOL hasSigConfigWhitelist;
@property (retain, nonatomic) ABCPbSigConfigWhitelist *sigConfigWhitelist;

+ (Class)sigResponseType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsGlobalDecision:(id)a0;
- (void)addSigResponse:(id)a0;
- (void)clearSigResponses;
- (id)globalDecisionAsString:(int)a0;
- (id)sigResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)sigResponsesCount;

@end
