@class NSString, NSMutableArray;

@interface _ICLLRemoveQueueItemCommand : PBCodable <NSCopying> {
    NSString *_itemId;
    NSMutableArray *_itemIdsToRemoves;
    NSString *_queueContext;
    int _removeType;
    int _revision;
    struct { unsigned char removeType : 1; unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
