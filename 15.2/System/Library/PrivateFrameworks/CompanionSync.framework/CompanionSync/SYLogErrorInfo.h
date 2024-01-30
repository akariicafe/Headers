@class NSError, NSString;

@interface SYLogErrorInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) NSError *cocoaError;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;

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
- (id)initWithCocoaError:(id)a0;

@end
