@class NSString;

@interface CLSettingsManagerMock : CLSettingsManagerInternal <CLSettingsManagerMockProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setSettings:(id)a0;

@end
