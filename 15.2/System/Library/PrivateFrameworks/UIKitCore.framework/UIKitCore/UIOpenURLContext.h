@class NSDictionary, NSURL, UISceneOpenURLOptions;

@interface UIOpenURLContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *optionsDictionary;
@property (readonly, copy, nonatomic) NSDictionary *URLOptionsDictionary;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) UISceneOpenURLOptions *options;

- (id)initWithURL:(id)a0 options:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)URLOptionsDictionary;
- (unsigned long long)hash;

@end
