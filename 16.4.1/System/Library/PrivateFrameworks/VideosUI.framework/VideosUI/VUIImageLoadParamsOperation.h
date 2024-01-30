@class TVImage, NSError, NSString;
@protocol VUIImageLoadParams;

@interface VUIImageLoadParamsOperation : VUIAsynchronousOperation <VUIImageLoadingOperation>

@property (retain, nonatomic) id<VUIImageLoadParams> params;
@property (nonatomic) struct CGSize { double width; double height; } scaleToSize;
@property (nonatomic) BOOL cropToFit;
@property (retain, nonatomic) TVImage *image;
@property (nonatomic) unsigned long long scalingResult;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;

@end
