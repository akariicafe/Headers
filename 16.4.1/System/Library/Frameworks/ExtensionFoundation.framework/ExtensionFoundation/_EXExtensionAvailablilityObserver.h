@class NSArray, NSString;

@interface _EXExtensionAvailablilityObserver : NSObject <_EXActiveQueryObserver, _EXServiceClientObserver>

@property (readonly) id /* block */ block;
@property (readonly, copy) NSArray *queries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(id /* block */)a0;
- (void)query:(id)a0 resultDidUpdate:(id)a1;
- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;

@end
