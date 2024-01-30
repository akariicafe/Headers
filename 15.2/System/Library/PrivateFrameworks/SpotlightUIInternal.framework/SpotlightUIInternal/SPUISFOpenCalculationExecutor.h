@class NSString;

@interface SPUISFOpenCalculationExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calculationURLsWithInput:(id)a0 output:(id)a1;

- (void)performCommand:(id)a0 withCompletion:(id /* block */)a1;

@end
