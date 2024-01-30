@class NSString;

@interface ATPRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasCommand;
@property (retain, nonatomic) NSString *command;
@property (readonly, nonatomic) BOOL hasDataClass;
@property (retain, nonatomic) NSString *dataClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
