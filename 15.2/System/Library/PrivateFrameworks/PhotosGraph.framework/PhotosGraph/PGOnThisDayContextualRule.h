@class NSString;

@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 withOptions:(id)a1 modelReader:(id)a2 curationContext:(id)a3 usingBlock:(id /* block */)a4;
- (id)_contextualKeyAssetForDayHighlightItem:(id)a0 contextualLocalDate:(id)a1;

@end
