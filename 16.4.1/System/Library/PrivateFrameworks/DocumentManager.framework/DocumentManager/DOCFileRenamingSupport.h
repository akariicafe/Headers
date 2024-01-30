@interface DOCFileRenamingSupport : NSObject

+ (id)_filteredNameForName:(id)a0 error:(id *)a1;
+ (id)_urlForProposedName:(id)a0 originalURL:(id)a1 error:(id *)a2;
+ (BOOL)_validateFileName:(id)a0 error:(id *)a1;
+ (id)fallbackRename:(id)a0 toProposedName:(id)a1 error:(id *)a2;

@end
