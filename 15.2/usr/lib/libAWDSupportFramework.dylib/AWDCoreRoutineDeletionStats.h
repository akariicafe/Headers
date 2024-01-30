@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deleteType : 1; unsigned char syncEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSyncEnabled;
@property (nonatomic) BOOL syncEnabled;
@property (nonatomic) BOOL hasDeleteType;
@property (nonatomic) unsigned int deleteType;
@property (retain, nonatomic) NSMutableArray *groups;

+ (Class)groupsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)addGroups:(id)a0;
- (unsigned long long)groupsCount;
- (void)clearGroups;
- (id)groupsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
