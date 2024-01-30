@class NSString, NTPBDate;

@interface NTPBAudioPlaylistItem : PBCodable <NSCopying> {
    struct { unsigned char listOrder : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasDateAdded;
@property (retain, nonatomic) NTPBDate *dateAdded;
@property (nonatomic) BOOL hasListOrder;
@property (nonatomic) long long listOrder;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
