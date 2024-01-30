@class NSString;

@interface WFREPBAlertButton : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) int style;
@property (nonatomic) BOOL preferred;

- (int)StringAsStyle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)styleAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
