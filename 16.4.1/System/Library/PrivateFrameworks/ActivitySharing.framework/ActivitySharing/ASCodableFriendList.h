@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *friends;

+ (Class)friendType;

- (unsigned long long)friendsCount;
- (id)friendAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFriend:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearFriends;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
