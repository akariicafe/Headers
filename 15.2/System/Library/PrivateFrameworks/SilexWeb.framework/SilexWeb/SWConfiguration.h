@class NSString, NSDictionary, NSURL, NSLocale;
@protocol SWLocation;

@interface SWConfiguration : NSObject <NSMutableCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) id<SWLocation> location;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSURL *activePictureInPictureURL;

- (BOOL)isEqualToConfiguration:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreFront:(id)a0 locale:(id)a1 contentSizeCategory:(id)a2 canvasSize:(struct CGSize { double x0; double x1; })a3 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 dataSources:(id)a5 location:(id)a6 sourceURL:(id)a7 activePictureInPictureURL:(id)a8;

@end
