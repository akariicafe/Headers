@interface FBKBugFormAttachmentPreview : NSObject

+ (BOOL)canPreviewItem:(id)a0;
+ (id)previewTypeURL:(id)a0;
+ (id)textFileForURL:(id)a0;
+ (id)URLByRemovingInvalidExtensions:(id)a0;
+ (id)textFileForString:(id)a0 withFileName:(id)a1;
+ (BOOL)extensionIsTextFile:(id)a0;
+ (BOOL)hasIps_dot_synced:(id)a0;
+ (BOOL)hasLog_dot_number:(id)a0;
+ (BOOL)urlPointsToTextFile:(id)a0;

@end
