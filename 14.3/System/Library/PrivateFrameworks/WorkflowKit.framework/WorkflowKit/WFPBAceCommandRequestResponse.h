@class NSString, NSData, WFPBError;

@interface WFPBAceCommandRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSData *aceCommandResponseData;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFPBError *error;

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

@end
