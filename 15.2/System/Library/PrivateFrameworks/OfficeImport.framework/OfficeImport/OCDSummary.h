@class NSString;

@interface OCDSummary : NSObject {
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (id)author;
- (id)title;
- (id)comments;
- (void)setAuthor:(id)a0;
- (void).cxx_destruct;
- (id)keywords;
- (void)setTitle:(id)a0;
- (void)setComments:(id)a0;
- (void)setKeywords:(id)a0;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)a0;

@end
