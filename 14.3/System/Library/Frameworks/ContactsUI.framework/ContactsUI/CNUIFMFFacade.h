@class FMFSession;

@interface CNUIFMFFacade : NSObject

@property (readonly, nonatomic) FMFSession *fmfSession;

- (id)init;
- (void).cxx_destruct;
- (void)fetchFriendHandlesWithCompletionHandler:(id /* block */)a0;
- (id)initWithFMFSession:(id)a0;

@end
