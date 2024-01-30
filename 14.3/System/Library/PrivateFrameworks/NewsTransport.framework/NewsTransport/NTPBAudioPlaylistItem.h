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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
