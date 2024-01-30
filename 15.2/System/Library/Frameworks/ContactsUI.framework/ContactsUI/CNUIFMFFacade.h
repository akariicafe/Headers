@class FMFSession;

@interface CNUIFMFFacade : NSObject

@property (readonly, nonatomic) FMFSession *fmfSession;

- (void)fetchFriendHandlesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFMFSession:(id)a0;

@end
