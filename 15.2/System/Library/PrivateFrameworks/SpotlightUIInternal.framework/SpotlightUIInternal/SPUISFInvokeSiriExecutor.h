@class NSString;

@interface SPUISFInvokeSiriExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invokeSiriWithUtteranceText:(id)a0 source:(long long)a1;

- (void)performCommand:(id)a0 withCompletion:(id /* block */)a1;

@end
