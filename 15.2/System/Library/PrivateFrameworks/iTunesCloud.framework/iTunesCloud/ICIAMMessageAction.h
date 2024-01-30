@class NSString, NSMutableArray, ICIAMMetricEvent;

@interface ICIAMMessageAction : PBCodable <NSCopying> {
    struct { unsigned char messageRemovalPolicy : 1; unsigned char requiresDelegate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) BOOL hasRequiresDelegate;
@property (nonatomic) BOOL requiresDelegate;
@property (retain, nonatomic) NSMutableArray *actionParameters;
@property (readonly, nonatomic) BOOL hasClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *clickEvent;
@property (nonatomic) BOOL hasMessageRemovalPolicy;
@property (nonatomic) int messageRemovalPolicy;

+ (Class)actionParametersType;

- (void)clearActionParameters;
- (BOOL)readFrom:(id)a0;
- (void)addActionParameters:(id)a0;
- (id)description;
- (unsigned long long)actionParametersCount;
- (id)messageRemovalPolicyAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)actionParametersAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsMessageRemovalPolicy:(id)a0;
- (id)dictionaryRepresentation;

@end
