@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager>

@property (readonly, nonatomic) FCTagSettings *tagSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateContentSizeCategory:(id)a0 forArticle:(id)a1;
- (id)contentSizeCategoryForSize:(long long)a0;
- (void)updateContentScale:(long long)a0 forArticle:(id)a1;
- (id)initWithTagSettings:(id)a0;
- (id)contentSizeCategoryForArticle:(id)a0;
- (long long)textSizeForContentSizeCategory:(id)a0;
- (long long)contentScaleForArticle:(id)a0;

@end
