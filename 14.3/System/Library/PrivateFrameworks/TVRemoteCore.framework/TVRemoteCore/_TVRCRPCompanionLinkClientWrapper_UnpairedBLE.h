@interface _TVRCRPCompanionLinkClientWrapper_UnpairedBLE : _TVRCRPCompanionLinkClientWrapper

- (BOOL)isPaired;
- (long long)connectionType;
- (void)connect;
- (BOOL)supportsTouchEvents;

@end
