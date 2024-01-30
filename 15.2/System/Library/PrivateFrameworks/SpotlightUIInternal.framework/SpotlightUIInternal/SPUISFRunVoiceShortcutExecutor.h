@class NSString;

@interface SPUISFRunVoiceShortcutExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getUserActivityForCommand:(id)a0 withHandler:(id /* block */)a1;

@end
