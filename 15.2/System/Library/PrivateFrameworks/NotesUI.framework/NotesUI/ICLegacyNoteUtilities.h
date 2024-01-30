@interface ICLegacyNoteUtilities : NSObject

+ (id)temporaryTextStorageWithAttributedString:(id)a0 replicaID:(id)a1 styler:(id)a2;
+ (void)importLegacyNote:(id)a0 temporaryTextStorage:(id)a1 toNote:(id)a2 attachmentPreviewGenerator:(id)a3;
+ (void)copyValuesFromLegacyNote:(id)a0 toNote:(id)a1 styler:(id)a2 attachmentPreviewGenerator:(id)a3;

@end
