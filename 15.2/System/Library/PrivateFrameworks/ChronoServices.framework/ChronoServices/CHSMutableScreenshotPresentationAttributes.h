@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes

@property (nonatomic) long long colorScheme;
@property (nonatomic) BOOL allowsPrivacySensitiveContent;

- (void)setColorScheme:(long long)a0;
- (void)setAllowsPrivacySensitiveContent:(BOOL)a0;

@end
