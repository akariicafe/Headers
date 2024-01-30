@class NSMutableString;

@interface NUHTMLBuilder : NSObject

@property (retain, nonatomic) NSMutableString *string;

- (id)init;
- (void).cxx_destruct;
- (id)appendText:(id)a0;
- (id)HTML;
- (id)URLEncode:(id)a0;
- (id)appendBreak;
- (id)appendHTML:(id)a0;
- (id)appendLink:(id)a0 withURL:(id)a1;
- (id)appendParagraph:(id)a0;
- (id)appendParagraphText:(id)a0;
- (id)appendStrong:(id)a0;
- (id)encodeHTMLEntities:(id)a0;
- (id)fullHTML;

@end
