@class NSString;

@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (readonly, nonatomic) double offsetFromPresentationEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (id)bannerSourceLayoutDescriptionWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1 offsetFromPresentationEdge:(double)a2;

@end
