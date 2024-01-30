@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

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
- (void)clearApplicationMessageSyncResponses;
- (void)addApplicationMessageSyncResponses:(id)a0;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)a0;

@end
