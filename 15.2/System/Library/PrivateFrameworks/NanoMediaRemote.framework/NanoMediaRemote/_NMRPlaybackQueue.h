@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {
    struct { unsigned char location : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;

+ (Class)contentItemType;

- (void)addContentItem:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)contentItemsCount;
- (void)clearContentItems;
- (id)dictionaryRepresentation;
- (id)contentItemAtIndex:(unsigned long long)a0;

@end
