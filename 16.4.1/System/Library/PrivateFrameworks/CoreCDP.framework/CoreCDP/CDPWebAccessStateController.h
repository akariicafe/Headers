@class NSString;

@interface CDPWebAccessStateController : NSObject <CDPWebAccessStatusUpdater, CDPWebAccessStatusProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webAccessStatusWithCompletion:(id /* block */)a0;
- (void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)webAccessStatus:(id *)a0;

@end
