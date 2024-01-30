@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject

@property (retain) NSMutableDictionary *_runningQueries;

+ (id)sharedInstance;

- (id)init;
- (void)messageItemQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadMessageItemWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)messageQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void)loadMessageWithGUID:(id)a0 completionBlock:(id /* block */)a1;

@end
