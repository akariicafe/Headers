@class NSString;

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand>

@property (nonatomic, getter=isDisabled, setter=_setDisabled:) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)setDisabled:(BOOL)a0;

@end
