@class NSString, NSURL, NSDate;

@interface WFArticle : NSObject <NSSecureCoding, WFNaming, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *author;
@property (readonly, copy, nonatomic) NSDate *publishedDate;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *excerpt;
@property (readonly, nonatomic) unsigned long long numberOfWords;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSURL *mainImageURL;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)articleWithTitle:(id)a0 author:(id)a1 publishedDate:(id)a2 body:(id)a3 excerpt:(id)a4 numberOfWords:(unsigned long long)a5 mainImageURL:(id)a6 URL:(id)a7;
+ (void)fetchArticleFromURL:(id)a0 pageHTML:(id)a1 completionHandler:(id /* block */)a2;
+ (id)mainImageURLFromHTML:(id)a0;
+ (unsigned long long)numberOfWordsInString:(id)a0;
+ (id)summaryOfParagraph:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 author:(id)a1 publishedDate:(id)a2 body:(id)a3 excerpt:(id)a4 numberOfWords:(unsigned long long)a5 mainImageURL:(id)a6 URL:(id)a7;

@end
