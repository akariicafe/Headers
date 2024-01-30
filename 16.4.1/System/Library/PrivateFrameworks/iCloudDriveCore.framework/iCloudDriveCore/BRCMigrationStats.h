@class NSUUID;

@interface BRCMigrationStats : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long sideFaultsCount;
@property unsigned long long clonedFolders;
@property unsigned long long clonedFiles;
@property unsigned long long clonedSideFaults;
@property unsigned long long clonedAppLibraries;
@property unsigned long long cloningFailures;
@property unsigned long long reconciledItems;
@property unsigned long long reconciliationFailures;
@property unsigned long long migratedSideFaults;
@property unsigned long long nonMigratedItems;
@property unsigned long long expectedMigrations;
@property unsigned long long materialisedInCloudDocs;
@property unsigned long long materializedInFPFS;
@property unsigned long long itemsNotFoundInDB;
@property unsigned long long itemsChangedDuringCloning;
@property unsigned long long ignoredContentProtectedItems;
@property unsigned long long packagesWithoutBundleBit;
@property unsigned long long bouncedDocumentsFolders;
@property unsigned long long symlinkedDocumentsFolders;
@property unsigned long long documentsFoldersWithoutItemID;
@property unsigned long long datalessItems;
@property long long unexpectedCreations;
@property unsigned long long bouncedItems;
@property unsigned long long totalItemCount;
@property double duration;
@property double cloningDuration;
@property double importDuration;
@property (retain) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
