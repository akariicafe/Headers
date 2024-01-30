@class NSString, NSData;

@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasBalanceBytes;
@property (retain, nonatomic) NSData *balanceBytes;
@property (readonly, nonatomic) BOOL hasBalanceReminderBytes;
@property (retain, nonatomic) NSData *balanceReminderBytes;

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
