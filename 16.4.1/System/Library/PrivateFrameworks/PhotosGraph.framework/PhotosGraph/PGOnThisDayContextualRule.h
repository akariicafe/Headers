@class NSString;

@interface PGOnThisDayContextualRule : NSObject <PGContextualRule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contextualKeyAssetForDayHighlightItem:(id)a0 contextualLocalDate:(id)a1 sharingFilter:(unsigned short)a2;
- (BOOL)canProvideContextualKeyAssetsWithOptions:(id)a0;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)a0 sharingFilter:(unsigned short)a1 withOptions:(id)a2 modelReader:(id)a3 curationContext:(id)a4 usingBlock:(id /* block */)a5;

@end
