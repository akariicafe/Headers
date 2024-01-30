@class NSUUID, NSString, NSError, BRCBouncingReport, BRCEAccessReport;

@interface BRCMigrationReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long ciconiaVersion;
@property double duration;
@property double cloningDuration;
@property double importDuration;
@property BOOL manuallyTriggered;
@property (retain) NSUUID *migrationUUID;
@property (retain) NSString *domainID;
@property (retain, nonatomic) NSError *lastError;
@property unsigned long long errorOriginatorId;
@property BOOL errorOverriden;
@property (retain) NSString *crashReporterKey;
@property BOOL sideFaultsBelowThreshold;
@property BOOL nonSideFaultsCompletelyMigrated;
@property unsigned long long expectedAmountOfItemsMigrated;
@property unsigned long long itemsThatAreNotMigrated;
@property struct BRTypesField { union { int types; struct { unsigned char doc : 1; unsigned char alias : 1; unsigned char symlink : 1; unsigned char folder : 1; unsigned char fault : 1; unsigned char root : 1; unsigned char bookmark : 1; unsigned char bookmarkfault : 1; unsigned char shareacceptfault : 1; } ; } ; } typeOfNotMigrated;
@property struct BRTypesField { union { int types; struct { unsigned char doc : 1; unsigned char alias : 1; unsigned char symlink : 1; unsigned char folder : 1; unsigned char fault : 1; unsigned char root : 1; unsigned char bookmark : 1; unsigned char bookmarkfault : 1; unsigned char shareacceptfault : 1; } ; } ; } typeOfMigrated;
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
@property struct BRBouncesTypesMatrix { union { unsigned long long matrix; struct { unsigned char dirToLnk : 1; unsigned char dirToAls : 1; unsigned char dirToPkg : 1; unsigned char dirToDoc : 1; unsigned char lnkToDir : 1; unsigned char lnkToAls : 1; unsigned char lnkToPkg : 1; unsigned char lnkToDoc : 1; unsigned char alsToDir : 1; unsigned char alsToLnk : 1; unsigned char alsToPkg : 1; unsigned char alsToDoc : 1; unsigned char pkgToDir : 1; unsigned char pkgToLnk : 1; unsigned char pkgToAls : 1; unsigned char pkgToDoc : 1; unsigned char docToDir : 1; unsigned char docToLnk : 1; unsigned char docToAls : 1; unsigned char docToPkg : 1; unsigned char sameType : 1; } ; } ; } bouncedItemsMatrix;
@property (retain) BRCBouncingReport *bounceReport;
@property (retain) BRCEAccessReport *eaccessReport;
@property unsigned long long materialisedCountOnICD;
@property unsigned long long materialisedCountOnFPFS;
@property unsigned long long totalItemCount;

+ (id)cleanupStateURL;
+ (id)migrationReportFromData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)convertToData;

@end
