@class NSString, SXJSONArray;

@interface SXGalleryComponent : SXComponent

@property (readonly, nonatomic) NSString *galleryType;
@property (readonly, nonatomic) SXJSONArray *items;

+ (id)typeString;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (unsigned long long)traits;

@end
