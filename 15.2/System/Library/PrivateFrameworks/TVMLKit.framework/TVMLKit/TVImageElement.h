@class NSURL, NSDictionary;

@interface TVImageElement : TVViewElement

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *srcset;
@property (readonly, nonatomic) long long imageType;

- (struct CGSize { double x0; double x1; })imageScaleToSize;

@end
