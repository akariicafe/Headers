@class NSString;

@interface TCMPSResizeAugmenter : NSObject <TCMPSImageAugmenting>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageAugmentedFromImage:(id)a0 generator:(id /* block */)a1;

@end
