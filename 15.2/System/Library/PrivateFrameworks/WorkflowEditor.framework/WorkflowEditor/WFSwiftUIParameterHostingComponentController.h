@class WFParameterHostingView;

@interface WFSwiftUIParameterHostingComponentController : CKStatefulViewComponentController {
    WFParameterHostingView *_viewForSizing;
}

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1 forSizing:(BOOL)a2;

- (void).cxx_destruct;
- (void)willRelinquishStatefulView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forComponent:(id)a1;

@end
