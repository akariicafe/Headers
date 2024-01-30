@class NSString;

@interface NUArticleContext : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL shouldAutoPlayVideo;
@property (readonly, nonatomic) NSString *componentIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShouldAutoPlayVideo:(BOOL)a0 componentIdentifier:(id)a1;

@end
