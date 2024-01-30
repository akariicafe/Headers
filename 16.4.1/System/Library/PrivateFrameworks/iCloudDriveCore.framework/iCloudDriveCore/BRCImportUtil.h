@interface BRCImportUtil : NSObject

+ (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)reimportItemsBelowItemWithIdentifier:(id)a0 error:(id *)a1;
+ (void)requestModificationOfItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
