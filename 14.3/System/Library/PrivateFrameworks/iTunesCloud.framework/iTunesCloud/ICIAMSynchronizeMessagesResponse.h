@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

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
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)a0;
- (void)addApplicationMessageSyncResponses:(id)a0;
- (void)clearApplicationMessageSyncResponses;

@end
