@interface AAUIDevicePINController : DevicePINController

- (id)stringsBundle;
- (BOOL)_asyncSetPinCompatible;
- (id)pinInstructionsPrompt;
- (id)title;

@end
