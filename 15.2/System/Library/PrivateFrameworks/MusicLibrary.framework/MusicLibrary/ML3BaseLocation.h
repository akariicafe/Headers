@interface ML3BaseLocation : ML3Entity

+ (id)databaseTable;
+ (id)newWithDictionary:(id)a0 inLibrary:(id)a1;
+ (BOOL)insertionChangesLibraryContents;

- (void)enumerateOrphanedAssetsUsingBlock:(id /* block */)a0;

@end
