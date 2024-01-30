@class UIImage, NSString, NSDate;

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject

@property (readonly, nonatomic) UIImage *rawImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rawCropRect;
@property (readonly, nonatomic) NSString *serverCacheTag;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)entryWithRawImage:(id)a0 rawCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 serverCacheTag:(id)a2;

- (void).cxx_destruct;

@end
