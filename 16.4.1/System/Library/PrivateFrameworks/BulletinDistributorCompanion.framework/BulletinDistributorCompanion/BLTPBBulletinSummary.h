@class NSString, NSMutableArray;

@interface BLTPBBulletinSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) unsigned int destinations;
@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keyType;

- (id)keyAtIndex:(unsigned long long)a0;
- (unsigned long long)keysCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addKey:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearKeys;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
