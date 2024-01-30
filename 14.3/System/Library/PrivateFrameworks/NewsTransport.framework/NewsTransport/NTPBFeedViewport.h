@class NSString, NSMutableArray;

@interface NTPBFeedViewport : PBCodable <NSCopying> {
    struct { unsigned char feedDBVersion : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL hasFeedDBVersion;
@property (nonatomic) unsigned long long feedDBVersion;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *sharedStrings;

+ (Class)elementsType;
+ (Class)sharedStringsType;

- (void)addSharedStrings:(id)a0;
- (void)clearSharedStrings;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearElements;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)elementsCount;
- (id)sharedStringsAtIndex:(unsigned long long)a0;
- (unsigned long long)sharedStringsCount;
- (void)addElements:(id)a0;
- (id)elementsAtIndex:(unsigned long long)a0;

@end
