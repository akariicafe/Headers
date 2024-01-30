@class NSString;

@interface SXEmbedComponent : SXComponent

@property (readonly, nonatomic) NSString *embedType;
@property (readonly, nonatomic) NSString *resourceIdentifier;

- (unsigned long long)traits;

@end
