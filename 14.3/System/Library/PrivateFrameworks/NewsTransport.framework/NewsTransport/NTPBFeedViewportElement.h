@class NSString, NTPBFeedViewportGroup, NTPBFeedViewportGap;

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPbGroup;
@property (retain, nonatomic) NTPBFeedViewportGroup *pbGroup;
@property (readonly, nonatomic) BOOL hasPbGap;
@property (retain, nonatomic) NTPBFeedViewportGap *pbGap;

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
