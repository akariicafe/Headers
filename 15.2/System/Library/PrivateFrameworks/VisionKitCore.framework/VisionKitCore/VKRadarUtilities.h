@interface VKRadarUtilities : NSObject

+ (void)promptUserToFileBugWithAlertMessage:(id)a0 bugTitle:(id)a1 bugDescription:(id)a2;
+ (void)createRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4;
+ (void)createRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4 keywordIDs:(id)a5 attachmentURLs:(id)a6 includeSysdiagnose:(BOOL)a7;

@end
