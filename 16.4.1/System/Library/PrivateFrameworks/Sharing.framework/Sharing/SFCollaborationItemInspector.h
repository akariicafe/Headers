@interface SFCollaborationItemInspector : NSObject

+ (id)_collaborationItemForFileURL:(id)a0 itemProvider:(id)a1 activityItem:(id)a2 service:(id)a3 managedFileURL:(id)a4;
+ (id)_collaborationItemFromItemProvider:(id)a0 forActivityItem:(id)a1 service:(id)a2 shouldInspectFiles:(BOOL)a3 managedFileURL:(id)a4;
+ (id)inspectActivityItemValue:(id)a0 activityItem:(id)a1 service:(id)a2 shouldInspectFiles:(BOOL)a3 managedFileURL:(id)a4;

@end
