@interface WFInstapaperGetAction : WFInstapaperAction

- (void)runAsynchronouslyWithInput:(id)a0 selectedFolder:(id)a1;
- (id)connectionTypes;
- (void)engine:(id)a0 connection:(id)a1 didReceiveBookmarks:(id)a2 ofUser:(id)a3 forFolder:(id)a4;
- (BOOL)includeSpecialFolders;

@end
