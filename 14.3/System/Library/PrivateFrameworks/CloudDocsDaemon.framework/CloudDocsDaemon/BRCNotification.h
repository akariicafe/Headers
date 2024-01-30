@class NSURL, NSString, BRCAppLibrary, BRCItemGlobalID, BRFileObjectID, NSSet, NSMutableSet;

@interface BRCNotification : BRQueryItem

@property (readonly, nonatomic) BRCAppLibrary *appLibrary;
@property (readonly, nonatomic) NSString *aliasSourceAppLibraryID;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemGlobalID *parentGlobalID;
@property (readonly, nonatomic) unsigned long long oldParentFileID;
@property (readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
@property (readonly, nonatomic) NSString *oldAppLibraryID;
@property (readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property (retain, nonatomic) NSSet *parentGlobalIDs;
@property (retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases;
@property (retain, nonatomic) NSString *unsaltedBookmarkData;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isDocumentsFolder;

+ (BOOL)supportsSecureCoding;
+ (id)notificationFromItem:(id)a0 relpath:(id)a1;
+ (id)notificationGatheredFromItem:(id)a0;
+ (id)notificationWithAliasItem:(id)a0 targetItemNotification:(id)a1;

- (void)merge:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subclassDescription;
- (BOOL)canMerge:(id)a0;
- (Class)classForCoder;
- (id)initWithAliasItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (id)initWithLocalItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (void)_addAliasDecoration:(id)a0;
- (void)setNumberAttribute:(id)a0 forKey:(id)a1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (void)generateLogicalExtension:(id)a0 physicalExtension:(id)a1;

@end
