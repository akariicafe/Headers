@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {
    struct { unsigned char location : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;

+ (Class)contentItemType;

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
- (void)addContentItem:(id)a0;
- (unsigned long long)contentItemsCount;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)a0;

@end
