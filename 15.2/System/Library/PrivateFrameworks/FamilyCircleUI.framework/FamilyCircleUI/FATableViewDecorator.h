@class NSString;
@protocol UITableViewDataSource, FATableViewProtocol, UITableViewDelegate;

@interface FATableViewDecorator : NSObject <FATableViewProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) id<FATableViewProtocol> tableView;
@property (weak, nonatomic) id<UITableViewDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
