@class NSString, NSMutableArray, _ICLLQueueQuery;

@interface _ICLLPlayNowQueueItemsAction : PBCodable <NSCopying> {
    NSMutableArray *_items;
    int _position;
    NSString *_preferredPlayItemId;
    _ICLLQueueQuery *_queueQuery;
    int _revision;
    struct { unsigned char position : 1; unsigned char revision : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
