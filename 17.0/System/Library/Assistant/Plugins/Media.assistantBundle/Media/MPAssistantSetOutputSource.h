@class NSString;

@interface MPAssistantSetOutputSource : SAMPSetOutputSource <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_perform;
- (void)performWithCompletion:(id /* block */)a0;
- (id)_validate;

@end
