@interface AAUIDevicePINController : DevicePINController

- (id)title;
- (id)stringsBundle;
- (BOOL)_asyncSetPinCompatible;
- (id)pinInstructionsPrompt;

@end
