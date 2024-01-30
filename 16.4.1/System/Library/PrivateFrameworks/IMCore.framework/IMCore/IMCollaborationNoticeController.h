@interface IMCollaborationNoticeController : NSObject

+ (id)sharedInstance;

- (id)remoteDaemon;
- (id)listener;
- (id)init;
- (void)dismissNotice:(id)a0;
- (void)fetchCollaborationNoticesForChatGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)markAsViewedForNotice:(id)a0;
- (void)collaborationNoticesDidChangeForChatGUIDs:(id)a0;

@end
