@class CCVegaRenderer, NSString, CCVegaJSMouseEvent;

@interface CCVegaEventAsyncOperation : NSObject <CCAsyncOperation>

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) CCVegaJSMouseEvent *event;

- (void).cxx_destruct;
- (void)performOperationWithCallback:(id /* block */)a0;

@end
