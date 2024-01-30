@class CCVegaRenderer, NSString;

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation>

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (void)performOperationWithCallback:(id /* block */)a0;

@end
