@class CAXPBContextualAction, NSString, CAXPBPredictionContext, CAXPBSuggestion;

@interface CAXPBContextualActionsFeedbackEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSelectedAction;
@property (retain, nonatomic) CAXPBContextualAction *selectedAction;
@property (readonly, nonatomic) BOOL hasSuggestion;
@property (retain, nonatomic) CAXPBSuggestion *suggestion;
@property (readonly, nonatomic) BOOL hasDeviceContext;
@property (retain, nonatomic) CAXPBPredictionContext *deviceContext;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
