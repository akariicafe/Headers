@class NSError, NSString;

@interface SYLogErrorInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) NSError *cocoaError;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;

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
- (id)initWithCocoaError:(id)a0;

@end
