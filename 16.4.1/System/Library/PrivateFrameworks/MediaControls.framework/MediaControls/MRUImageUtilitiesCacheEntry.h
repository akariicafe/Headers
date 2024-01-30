@class NSString, UIImage, MSVTimer;

@interface MRUImageUtilitiesCacheEntry : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (retain, nonatomic) MSVTimer *evictionTimer;

- (void)dealloc;
- (void)startEvictionTimer;
- (void).cxx_destruct;
- (void)cancelEvictionTimer;

@end
