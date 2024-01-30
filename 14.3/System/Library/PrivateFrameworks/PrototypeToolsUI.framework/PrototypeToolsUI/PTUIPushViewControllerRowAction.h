@interface PTUIPushViewControllerRowAction : PTRowAction

@property (readonly, nonatomic) id /* block */ viewControllerCreator;

+ (id)actionWithViewControllerCreator:(id /* block */)a0;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (BOOL)deselectsRowOnSuccess;

@end
