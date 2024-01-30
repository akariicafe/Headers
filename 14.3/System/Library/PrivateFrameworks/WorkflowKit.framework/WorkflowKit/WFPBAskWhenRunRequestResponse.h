@class NSString, NSMutableArray, WFPBError;

@interface WFPBAskWhenRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *inputtedStates;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFPBError *error;

+ (Class)inputtedStatesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearInputtedStates;
- (void)addInputtedStates:(id)a0;
- (unsigned long long)inputtedStatesCount;
- (id)inputtedStatesAtIndex:(unsigned long long)a0;

@end
