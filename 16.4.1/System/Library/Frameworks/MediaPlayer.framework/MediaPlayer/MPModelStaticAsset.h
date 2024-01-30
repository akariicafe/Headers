@class NSURL;

@interface MPModelStaticAsset : MPModelObject

@property (nonatomic) double duration;
@property (nonatomic) long long flavorType;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSURL *url;

+ (id)__mediaType_KEY;
+ (id)__duration_KEY;
+ (id)__flavorType_KEY;
+ (id)__url_KEY;

@end
