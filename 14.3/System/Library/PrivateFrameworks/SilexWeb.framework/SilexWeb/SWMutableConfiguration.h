@class NSString, NSDictionary, NSURL, NSLocale;
@protocol SWLocation;

@interface SWMutableConfiguration : SWConfiguration

@property (copy, nonatomic) NSString *storeFront;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (copy, nonatomic) NSDictionary *dataSources;
@property (copy, nonatomic) id<SWLocation> location;
@property (copy, nonatomic) NSURL *sourceURL;

- (void).cxx_destruct;

@end
