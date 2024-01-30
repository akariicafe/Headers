@class NSString, NSMutableArray;

@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *availableContents;

+ (Class)availableContentsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)availableContentsCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)availableContentsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addAvailableContents:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearAvailableContents;

@end
