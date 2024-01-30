@interface WFFileLocationUtilities : NSObject

+ (id)itemForURL:(id)a0 error:(id *)a1;
+ (id)documentsDirectory;
+ (id)fetchRootItemURLForDomainWithID:(id)a0;
+ (id)parentItemsForItem:(id)a0;
+ (id)rootItemForItem:(id)a0;
+ (id)bundleIdentifierForItem:(id)a0;
+ (id)documentsURLForApplicationContainerBundleID:(id)a0;
+ (id)desktopDirectory;
+ (id)iCloudDesktopDirectory;
+ (id)iCloudDocumentsDirectory;
+ (id)downloadsDirectory;
+ (id)iCloudDownloadsDirectory;
+ (id)mobileDocumentsDirectory;
+ (id)displayNameForURL:(id)a0;
+ (BOOL)isFileURL:(id)a0 withParentItems:(id)a1 insideFolderType:(unsigned long long)a2;

@end
