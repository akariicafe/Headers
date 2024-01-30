@interface AFUISiriViewBuilder : NSObject

+ (BOOL)_carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation:(long long)a0;
+ (id)buildSiriViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 dataSource:(id)a2 delegate:(id)a3 siriContentDelegate:(id)a4;

@end
