@interface ISIconObserver : NSObject <ISIconManagerObserver>

@property (readonly, weak) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)iconManager:(id)a0 didInvalidateIcons:(id)a1;

@end
