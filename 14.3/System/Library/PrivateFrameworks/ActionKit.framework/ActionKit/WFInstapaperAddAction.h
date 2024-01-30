@interface WFInstapaperAddAction : WFInstapaperAction

- (void)runAsynchronouslyWithInput:(id)a0 selectedFolder:(id)a1;
- (id)connectionTypes;
- (void)engine:(id)a0 connection:(id)a1 didAddBookmark:(id)a2;

@end
