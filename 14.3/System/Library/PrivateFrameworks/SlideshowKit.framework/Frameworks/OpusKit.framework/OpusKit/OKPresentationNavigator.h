@class NSString, NSMutableArray, NSMutableDictionary;

@interface OKPresentationNavigator : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
}

@property (copy, nonatomic) NSString *className;
@property (readonly, copy, nonatomic) NSMutableArray *pagesNames;

+ (id)navigatorWithName:(id)a0 className:(id)a1 pagesNames:(id)a2 settings:(id)a3 userData:(id)a4;

- (id)init;
- (id)pages;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)dealloc;
- (void)resolveIfNeeded;
- (id)parentPage;
- (id)canvasWithName:(id)a0;
- (id)pageWithName:(id)a0;
- (id)initWithDictionary:(id)a0 andName:(id)a1 forPresentation:(id)a2 andParent:(id)a3;
- (void)addPageName:(id)a0;

@end
