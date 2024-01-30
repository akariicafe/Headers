@class NSString, NSURL;

@interface NUArticleExcerptHTML : NSObject

@property (readonly, nonatomic) NSString *processedHTML;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) unsigned long long lengthType;

+ (id)articleExcerptCSS;
+ (id)articleExcerptHTML;

- (void).cxx_destruct;
- (id)embedCSSIntoExcerptHTML:(id)a0 scale:(double)a1;
- (id)excerptHTMLToProcessedHTML:(id)a0 headline:(id)a1 scale:(double)a2;
- (id)initWitHeadline:(id)a0 excerptHTML:(id)a1 scale:(double)a2;
- (id)paragraphShortExcerptHTML:(id)a0 headline:(id)a1;
- (id)stripHTMLTagsFromExcerptHTML:(id)a0;

@end
