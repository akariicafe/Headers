@class NSURL, NSDictionary;

@interface VUITVApplicationControllerContext : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *javaScriptApplicationURL;
@property (copy, nonatomic) NSDictionary *launchOptions;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
