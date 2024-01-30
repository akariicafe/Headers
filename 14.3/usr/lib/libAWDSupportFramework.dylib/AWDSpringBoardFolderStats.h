@interface AWDSpringBoardFolderStats : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _numberOfFoldersPerPages;
    struct { unsigned char numberOfFoldersInDock : 1; unsigned char numberOfPagesInRootFolder : 1; unsigned char timestamp : 1; unsigned char totalNumberOfFolders : 1; unsigned char totalNumberOfIconsInDock : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTotalNumberOfFolders;
@property (nonatomic) unsigned long long totalNumberOfFolders;
@property (nonatomic) BOOL hasNumberOfPagesInRootFolder;
@property (nonatomic) unsigned long long numberOfPagesInRootFolder;
@property (nonatomic) BOOL hasTotalNumberOfIconsInDock;
@property (nonatomic) unsigned long long totalNumberOfIconsInDock;
@property (nonatomic) BOOL hasNumberOfFoldersInDock;
@property (nonatomic) unsigned long long numberOfFoldersInDock;
@property (readonly, nonatomic) unsigned long long numberOfFoldersPerPagesCount;
@property (readonly, nonatomic) unsigned long long *numberOfFoldersPerPages;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearNumberOfFoldersPerPages;
- (unsigned long long)numberOfFoldersPerPageAtIndex:(unsigned long long)a0;
- (void)addNumberOfFoldersPerPage:(unsigned long long)a0;
- (void)setNumberOfFoldersPerPages:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
