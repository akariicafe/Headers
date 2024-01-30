@class NSString;

@interface SWNavigationObserver : NSObject <SWNavigationObserver>

@property (readonly, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)handledNavigationWithURL:(id)a0;

@end
