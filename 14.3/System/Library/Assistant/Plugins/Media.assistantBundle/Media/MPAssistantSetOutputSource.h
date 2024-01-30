@class NSString;

@interface MPAssistantSetOutputSource : SAMPSetOutputSource <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (id)_perform;
- (id)_validate;

@end
