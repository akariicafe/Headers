@interface ISIconObserver : NSObject <ISIconManagerObserver>

@property (readonly, weak) id delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)iconManager:(id)a0 didInvalidateIcons:(id)a1;

@end
