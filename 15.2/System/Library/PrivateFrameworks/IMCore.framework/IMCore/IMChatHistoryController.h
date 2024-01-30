@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject

@property (retain) NSMutableDictionary *_runningQueries;

+ (id)sharedInstance;

- (void)loadMessageWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)loadMessageItemWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)messageItemQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void)messageQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)__im_ff_chatCacheEnabled;

@end
