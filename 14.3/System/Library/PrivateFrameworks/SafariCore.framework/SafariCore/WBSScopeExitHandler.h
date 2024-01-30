@interface WBSScopeExitHandler : NSObject

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)dealloc;

@end
