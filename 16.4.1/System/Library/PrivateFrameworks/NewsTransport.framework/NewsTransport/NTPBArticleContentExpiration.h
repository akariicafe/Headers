@class NSMutableArray;

@interface NTPBArticleContentExpiration : PBCodable <NSCopying> {
    struct { unsigned char globalExpireUtcTime : 1; } _has;
}

@property (nonatomic) BOOL hasGlobalExpireUtcTime;
@property (nonatomic) long long globalExpireUtcTime;
@property (retain, nonatomic) NSMutableArray *tagsExpirationLists;

+ (Class)tagsExpirationListType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)tagsExpirationListAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearTagsExpirationLists;
- (void)writeTo:(id)a0;
- (unsigned long long)tagsExpirationListsCount;
- (BOOL)readFrom:(id)a0;
- (void)addTagsExpirationList:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
