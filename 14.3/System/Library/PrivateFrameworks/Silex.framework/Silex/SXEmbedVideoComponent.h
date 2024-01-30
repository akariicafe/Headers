@class NSURL, NSString;

@interface SXEmbedVideoComponent : SXComponent

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *accessibilityCaption;

+ (id)typeString;

- (unsigned long long)traits;

@end
