@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {
    struct { unsigned char moreAvailable : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasChangeID;
@property (retain, nonatomic) NSData *changeID;
@property (retain, nonatomic) NSMutableArray *pushMessages;
@property (nonatomic) BOOL hasMoreAvailable;
@property (nonatomic) BOOL moreAvailable;

+ (Class)pushMessageType;

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
- (void)addPushMessage:(id)a0;
- (unsigned long long)pushMessagesCount;
- (void)clearPushMessages;
- (id)pushMessageAtIndex:(unsigned long long)a0;

@end
