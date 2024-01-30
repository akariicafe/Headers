@class NSString, NSData;

@interface SGMIMetricsRegexSignatureStat : PBCodable <NSCopying> {
    struct { unsigned char blockedWarningCount : 1; unsigned char negativeEngagement : 1; unsigned char noEngagement : 1; unsigned char positiveEngagement : 1; unsigned char type : 1; unsigned char incomingMessage : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEmailLanguage;
@property (retain, nonatomic) NSString *emailLanguage;
@property (readonly, nonatomic) BOOL hasRegexLanguage;
@property (retain, nonatomic) NSString *regexLanguage;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIncomingMessage;
@property (nonatomic) BOOL incomingMessage;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasNegativeEngagement;
@property (nonatomic) unsigned int negativeEngagement;
@property (nonatomic) BOOL hasNoEngagement;
@property (nonatomic) unsigned int noEngagement;
@property (nonatomic) BOOL hasPositiveEngagement;
@property (nonatomic) unsigned int positiveEngagement;
@property (nonatomic) BOOL hasBlockedWarningCount;
@property (nonatomic) unsigned int blockedWarningCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
