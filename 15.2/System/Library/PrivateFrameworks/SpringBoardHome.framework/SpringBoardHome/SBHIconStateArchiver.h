@interface SBHIconStateArchiver : NSObject

+ (id)iconStateRepresentationForFolder:(id)a0 inModel:(id)a1;
+ (id)_representationForIcon:(id)a0 inModel:(id)a1;
+ (id)_pathForNode:(id)a0 toIdentifier:(id)a1;
+ (BOOL)_widgetDataSourceIsSuggestion:(id)a0;
+ (id)_representationForList:(id)a0 inModel:(id)a1;
+ (id)leafIdentifiersFromArchive:(id)a0;
+ (id)_representationForFolder:(id)a0 inModel:(id)a1;
+ (id)_folderTypeForFolder:(id)a0;
+ (id)leafIdentifiersInListAtIndexPath:(id)a0 inArchive:(id)a1;
+ (id)_representationsForIcon:(id)a0 inModel:(id)a1;
+ (id)indexPathForLeafIdentifier:(id)a0 inArchive:(id)a1;
+ (id)_metadataForList:(id)a0 inModel:(id)a1;
+ (BOOL)_iconContainsMultipleRepresentations:(id)a0;
+ (id)_nodeAtPath:(id)a0 inNode:(id)a1;
+ (id)unarchiveRootFolderFromArchive:(id)a0 withIconSource:(id)a1;
+ (void)_addLeafNodesForNode:(id)a0 toSet:(id)a1;
+ (id)_representationForApplicationIcon:(id)a0 inModel:(id)a1;
+ (id)archiveRootFolderInModel:(id)a0 metadata:(id)a1;
+ (id)_representationForCustomIcon:(id)a0 inModel:(id)a1;
+ (void)_addValuesForCustomIconElement:(id)a0 toRepresentation:(id)a1;
+ (id)modernizeRootArchive:(id)a0;
+ (id)_representationForNode:(id)a0 inModel:(id)a1;
+ (id)folderPathForLeafIdentifier:(id)a0 inArchive:(id)a1 iconSource:(id)a2;

@end
