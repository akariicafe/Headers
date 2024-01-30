@class NSString, FCWebContent, FCANFContent;

@interface FCArticleContent : NSObject

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) FCWebContent *webContent;
@property (retain, nonatomic) FCANFContent *anfContent;

- (id)initWithArticleID:(id)a0 webContent:(id)a1;
- (id)initWithArticleID:(id)a0 contentType:(unsigned long long)a1;
- (id)initWithContext:(id)a0 articleRecord:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArticleID:(id)a0 anfContent:(id)a1;
- (unsigned long long)hash;

@end
