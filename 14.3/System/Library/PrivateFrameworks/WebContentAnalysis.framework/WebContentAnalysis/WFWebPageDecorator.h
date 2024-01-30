@class NSString, WFImgArrayCache, NSObject;
@protocol WFWebPageProtocol;

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
}

@property (retain) NSString *URLString;

+ (id)webPageWithString:(id)a0 URLString:(id)a1;
+ (id)_plainTextWithSelector:(SEL)a0 object:(id)a1;
+ (id)plainTextWithWebPageData:(id)a0;
+ (id)plainTextWithWebPageString:(id)a0;
+ (id)webPageWithData:(id)a0;
+ (id)webPageWithData:(id)a0 URLString:(id)a1;
+ (id)webPageWithString:(id)a0;

- (long long)numberOfImages;
- (id)pageContent;
- (long long)wordCount;
- (void)dealloc;
- (id)tags;
- (id)images;
- (id)pageTitle;
- (id)links;
- (id)plainText;
- (long long)numberOfKnownImagePixels;
- (long long)numberOfUnknownSizedImages;
- (id)metaTagDescription;
- (id)metaTagKeywords;
- (id)metaTagsLabeled;
- (id)metaTagsUnlabeled;
- (id)scriptBlocks;
- (BOOL)hasFrameset;
- (BOOL)hasShortRefresh;
- (id)initWithWebPageData:(id)a0;
- (id)initWithWebPageString:(id)a0;
- (id)initWithWebPageStripper:(id)a0;
- (void)_cacheImgProperties;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1 weight:(int)a2;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1;
- (id)imageAltsText;
- (id)rawPlainText;
- (id)linkTitlesText;

@end
