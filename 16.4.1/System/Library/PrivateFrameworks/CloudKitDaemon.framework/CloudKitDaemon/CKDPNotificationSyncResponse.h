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
- (void)addPushMessage:(id)a0;
- (void)clearPushMessages;
- (id)pushMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)pushMessagesCount;

@end
