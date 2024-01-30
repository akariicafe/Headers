@class NSString;
@protocol SBUILegibilityEngine;

@interface SBIconLabelViewDefaultFactory : NSObject <SBIconLabelViewFactory> {
    id<SBUILegibilityEngine> _engine;
    NSString *_factoryIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithFactoryIdentifier:(id)a0;
- (id)iconLabelViewWithSettings:(id)a0 imageParameters:(id)a1 forIconView:(id)a2;
- (BOOL)canUseIconSimpleLabelViewToDisplayLabelWithSettings:(id)a0 imageParameters:(id)a1 forIconView:(id)a2;
- (BOOL)canUseIconLabelView:(id)a0 toDisplayLabelWithSettings:(id)a1 imageParameters:(id)a2 forIconView:(id)a3;
- (void)prewarmForSettings:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 minSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (void).cxx_destruct;

@end
