@class NSString;

@interface PFLFetchPatchRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) NSString *taskId;

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
