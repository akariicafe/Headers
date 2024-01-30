@class NSString, NSURL;

@interface SXOEmbedResponse : SXJSONObject

@property (readonly, nonatomic) double thumbnailWidth;
@property (readonly, nonatomic) double thumbnailHeight;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) NSURL *authorURL;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSURL *providerURL;
@property (readonly, nonatomic) double cacheAge;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;

+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;

- (id)objectForKey:(id)a0;
- (double)cacheAgeWithValue:(id)a0 withType:(int)a1;

@end
