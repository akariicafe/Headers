@class NSString;
@protocol _UIFocusTestDelegate;

@interface _UIFocusTest : NSObject

@property (class, retain, nonatomic, setter=_setCurrentTest:) _UIFocusTest *currentTest;

@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ runCompletionHandler;
@property (nonatomic, getter=_isApplicationTest) BOOL isApplicationTest;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<_UIFocusTestDelegate> delegate;

- (void)cancel;
- (void)_start;
- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)main;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (void)_finish:(BOOL)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;

@end
