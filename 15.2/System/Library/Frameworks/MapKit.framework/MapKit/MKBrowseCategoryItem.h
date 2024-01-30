@class NSString, UIImage, GEOSearchCategory;

@interface MKBrowseCategoryItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) GEOSearchCategory *searchCategory;

- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 nightMode:(BOOL)a1;
- (id)imageWithSearchCategory:(id)a0 nightMode:(BOOL)a1;

@end
