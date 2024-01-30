@protocol WFSiriUIPresenterConnection;

@interface WFSiriUIPresenter : NSObject

@property (readonly, nonatomic) id<WFSiriUIPresenterConnection> connection;
@property (nonatomic) BOOL connected;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;

@end
