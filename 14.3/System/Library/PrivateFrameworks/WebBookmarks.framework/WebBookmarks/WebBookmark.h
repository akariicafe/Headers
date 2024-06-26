@class NSString, NSDictionary, NSData, NSDate;

@interface WebBookmark : NSObject <NSCopying> {
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    unsigned int _orderIndex;
    unsigned long long _modifiedAttributes;
    BOOL _usedForInMemoryChangeTracking;
}

@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSData *syncData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (readonly, nonatomic) unsigned long long modifiedAttributes;
@property (readonly, nonatomic) BOOL isReadingListItem;
@property (retain, nonatomic) NSString *previewText;
@property (nonatomic) BOOL locallyAdded;
@property (nonatomic) int archiveStatus;
@property (nonatomic) int webFilterStatus;
@property (retain, nonatomic) NSDate *dateLastArchived;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSDate *dateLastViewed;
@property (retain, nonatomic) NSDate *dateLastFetched;
@property (retain, nonatomic) NSDictionary *nextPageURLs;
@property (retain, nonatomic) NSString *localPreviewText;
@property (retain, nonatomic) NSString *readingListIconURL;
@property (retain, nonatomic) NSString *readingListIconUUID;
@property (nonatomic) BOOL hasFetchedMetadata;
@property (nonatomic) BOOL shouldArchive;
@property (nonatomic) BOOL needsSyncUpdate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *address;
@property (readonly, nonatomic) int parentID;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) int specialID;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (nonatomic) BOOL fetchedIconData;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSDictionary *extraAttributes;
@property (retain, nonatomic) NSDictionary *localAttributes;

+ (id)_trimmedTitle:(id)a0;
+ (id)_trimmedPreviewText:(id)a0;

- (id)localizedTitle;
- (BOOL)isReadingListFolder;
- (void)_markAttributesAsModified:(unsigned long long)a0;
- (id)initFolderWithParentID:(int)a0;
- (void)_markSpecial:(int)a0;
- (id)initWithTitle:(id)a0 address:(id)a1;
- (BOOL)isEqualToBookmark:(id)a0;
- (void)_setID:(int)a0;
- (id)initReadingListBookmarkWithTitle:(id)a0 address:(id)a1 previewText:(id)a2;
- (void)_setParentID:(int)a0;
- (void)_setUsedForInMemoryChangeTracking:(BOOL)a0;
- (id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)a0;
- (void)_setInserted:(BOOL)a0;
- (id)initWithTitle:(id)a0 address:(id)a1 parentID:(int)a2;
- (id)init;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)a0 address:(id)a1;
- (id)shortTypeDescription;
- (id)initBuiltinBookmarkWithTitle:(id)a0 address:(id)a1;
- (id)initCarrierBookmarkWithTitle:(id)a0 address:(id)a1;
- (id)initWhiteListBookmarkWithTitle:(id)a0 address:(id)a1;
- (BOOL)isBuiltinBookmark;
- (id)initFrequentlyVisitedSiteWithWebBookmark:(id)a0 title:(id)a1;
- (BOOL)isBookmarksBarFolder;
- (BOOL)isBookmarksMenuFolder;
- (BOOL)isWebFilterWhiteListFolder;
- (BOOL)isFrequentlyVisitedSitesFolder;
- (unsigned int)_orderIndex;
- (BOOL)_usedForInMemoryChangeTracking;
- (void).cxx_destruct;
- (void)_setUUID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)archiveSize;
- (void)clearArchiveSynchronously;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { } *)a0;
- (void)clearArchive;
- (void)_setOrderIndex:(unsigned int)a0;
- (BOOL)fullArchiveAvailable;
- (void)_setSyncable:(BOOL)a0;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { } *)a0 hasIcon:(BOOL)a1;
- (void)cleanupRedundantPreviewText;
- (id)_readingListPropertyNamed:(id)a0;
- (void)_modifyExtraReadingListAttributes:(id /* block */)a0;
- (void)_modifyLocalReadingListAttributes:(id /* block */)a0;
- (void)setTitle:(id)a0 previewText:(id)a1 dateLastFetched:(id)a2;
- (id)offlineArchiveDirectoryPath;
- (unsigned long long)_sizeForFileOrDirectory:(id)a0 withAttributes:(id)a1;
- (void)_removeDirectoryAtPath:(id)a0;
- (id)webarchivePathInReaderForm:(BOOL)a0 fileExists:(BOOL *)a1;
- (id)webarchivePathForNextPageURL:(id)a0;
- (BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)a0;
- (void)writeOfflineWebView:(id)a0 withOptions:(unsigned long long)a1 quickLookFilePath:(id)a2 suggestedFileName:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_setHidden:(BOOL)a0;
- (BOOL)_attributesMarkedAsModified:(unsigned long long)a0;

@end
