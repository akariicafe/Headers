@class SKUIEditorialComponent, SKUILayoutCache;

@interface SKUIEditorialLayout : NSObject {
    long long _landscapeLinkLayoutIndex;
    long long _landscapeTextLayoutIndex;
    long long _landscapeTitleLayoutIndex;
    double _landscapeWidth;
    long long _portraitLinkLayoutIndex;
    long long _portraitTextLayoutIndex;
    long long _portraitTitleLayoutIndex;
    double _portraitWidth;
}

@property (readonly, nonatomic) SKUIEditorialComponent *editorialComponent;
@property (readonly, nonatomic) SKUILayoutCache *layoutCache;

- (void).cxx_destruct;
- (id)_bodyTextLayoutRequestWithTotalWidth:(double)a0;
- (id)_linkLayoutRequestWithTotalWidth:(double)a0;
- (id)_titleTextLayoutRequestWithTotalWidth:(double)a0;
- (id)bodyTextLayoutForOrientation:(long long)a0;
- (void)enqueueLayoutRequests;
- (id)initWithEditorial:(id)a0 layoutCache:(id)a1;
- (double)layoutHeightForOrientation:(long long)a0 expanded:(BOOL)a1;
- (id)linkLayoutForOrientation:(long long)a0;
- (void)setLayoutWidth:(double)a0 forOrientation:(long long)a1;
- (id)titleTextLayoutForOrientation:(long long)a0;

@end
