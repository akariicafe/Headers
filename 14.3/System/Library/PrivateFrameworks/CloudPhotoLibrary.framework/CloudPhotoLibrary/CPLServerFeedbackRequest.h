@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *messages;

- (void)addMessages:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
