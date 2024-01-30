@class NSString, NSDictionary, NSURL, NSUserActivity;

@interface INCAppLaunchRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic, getter=isSupportedInCarPlay) BOOL supportedInCarPlay;

+ (void)initialize;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithInteraction:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 error:(id *)a3;
- (id)initWithIntent:(id)a0 userActivity:(id)a1 inBackground:(BOOL)a2 error:(id *)a3;
- (id)initWithAudioCallIntentForCarousel:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1 URL:(id)a2 userActivity:(id)a3;
- (void)performWithService:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeForAppLaunchWithTimeout:(double)a0 completionHandler:(id /* block */)a1;

@end
