@class NSString;

@interface BMPBUserFocusComputedModeEvent : PBCodable <NSCopying> {
    struct { unsigned char modeSemanticType : 1; unsigned char modeUpdateReason : 1; unsigned char modeUpdateSource : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMode;
@property (retain, nonatomic) NSString *mode;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasModeUpdateReason;
@property (nonatomic) int modeUpdateReason;
@property (nonatomic) BOOL hasModeSemanticType;
@property (nonatomic) int modeSemanticType;
@property (nonatomic) BOOL hasModeUpdateSource;
@property (nonatomic) int modeUpdateSource;
@property (readonly, nonatomic) BOOL hasSemanticModeIdentifier;
@property (retain, nonatomic) NSString *semanticModeIdentifier;

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
- (id)modeUpdateReasonAsString:(int)a0;
- (int)StringAsModeUpdateReason:(id)a0;
- (id)modeSemanticTypeAsString:(int)a0;
- (int)StringAsModeSemanticType:(id)a0;
- (id)modeUpdateSourceAsString:(int)a0;
- (int)StringAsModeUpdateSource:(id)a0;

@end
