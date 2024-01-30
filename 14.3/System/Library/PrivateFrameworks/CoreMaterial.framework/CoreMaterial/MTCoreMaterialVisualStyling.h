@class NSString, NSDictionary, CAFilter;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStyling : NSObject <MTTinting> {
    id<MTVisualStyleSetProviding> _visualStyleSet;
    NSString *_visualStyleName;
    CAFilter *_composedFilter;
    NSDictionary *_tintColorDescription;
    struct CGColor { } *_tintColor;
    double _tintAlpha;
    NSString *_compositingFilter;
    NSString *_filterType;
    NSDictionary *_filterProperties;
}

@property (readonly, nonatomic) NSString *visualStyleSetName;
@property (readonly, nonatomic) NSString *visualStyleName;
@property (readonly, nonatomic, getter=_composedFilter) CAFilter *composedFilter;
@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, nonatomic) struct CGColor { } *tintColor;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_processFilteringDescription:(id)a0;
- (void).cxx_destruct;
- (void)_getCompositingFilter:(id *)a0 tintColor:(struct CGColor **)a1;
- (id)filterType;
- (void)dealloc;
- (void)_getFilterType:(id *)a0 vibrantColor:(struct CGColor **)a1 tintColor:(struct CGColor **)a2 inputReversed:(BOOL *)a3;
- (id)compositingFilter;
- (void)_processBlendingDescription:(id)a0;
- (id)initWithVisualStyleSet:(id)a0 styleName:(id)a1 description:(id)a2 andDescendantDescriptions:(id)a3;
- (void)_processTintingDescription:(id)a0;
- (void)_applyToLayer:(id)a0 withColorBlock:(id /* block */)a1;
- (id)filterProperties;

@end
