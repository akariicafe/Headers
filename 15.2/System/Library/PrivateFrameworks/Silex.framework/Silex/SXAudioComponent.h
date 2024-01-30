@class NSString;

@interface SXAudioComponent : SXComponent

@property (readonly, nonatomic) NSString *stillImageIdentifier;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *accessibilityCaption;

+ (id)typeString;

- (unsigned long long)traits;

@end
