@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) BOOL allowsPrivacySensitiveContent;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
