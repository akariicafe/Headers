@class NSString, SXJSONArray;

@interface SXGalleryComponent : SXComponent

@property (readonly, nonatomic) NSString *galleryType;
@property (readonly, nonatomic) SXJSONArray *items;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (id)typeString;

- (unsigned long long)traits;

@end
