@class NSString, UIImage, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface WBSParsecImageRepresentation : WBSParsecModel {
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    UIImage *_image;
    BOOL _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
}

@property (readonly, nonatomic) NSNumber *baselineOffset;
@property (readonly, nonatomic) NSNumber *roundCornerRadius;

+ (id)schema;
+ (id)_bagImageDataCache;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)imageWithSession:(id)a0;
- (void)_fetchImageData;
- (id)imageWithScaleFactor:(double)a0;
- (id)_templateImageWithImage:(id)a0;
- (id)_imageWithData:(id)a0;
- (void)_fetchImageDataUsingBlock:(id /* block */)a0;
- (id)test_data;
- (id)test_identifier;
- (id)test_imageURLString;
- (BOOL)test_isTemplate;

@end
