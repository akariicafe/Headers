@interface AWDSpringBoardIconLaunch : PBCodable <NSCopying> {
    struct { unsigned char iconPageInFolder : 1; unsigned char timestamp : 1; unsigned char totalIconPagesInFolder : 1; unsigned char iconIsFolder : 1; unsigned char iconIsFromDock : 1; unsigned char iconIsFromFolder : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasIconIsFolder;
@property (nonatomic) BOOL iconIsFolder;
@property (nonatomic) BOOL hasIconIsFromFolder;
@property (nonatomic) BOOL iconIsFromFolder;
@property (nonatomic) BOOL hasIconIsFromDock;
@property (nonatomic) BOOL iconIsFromDock;
@property (nonatomic) BOOL hasIconPageInFolder;
@property (nonatomic) unsigned long long iconPageInFolder;
@property (nonatomic) BOOL hasTotalIconPagesInFolder;
@property (nonatomic) unsigned long long totalIconPagesInFolder;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
