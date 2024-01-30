@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject

@property (retain) NSMutableDictionary *_runningQueries;

+ (id)sharedInstance;

- (void)loadMessageWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)messageQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void)dealloc;
- (id)init;
- (void)messageItemQuery:(id)a0 finishedWithResult:(id)a1 chatGUIDs:(id)a2;
- (void)loadMessageItemWithGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
