@class NSMutableString;

@interface NUHTMLBuilder : NSObject

@property (retain, nonatomic) NSMutableString *string;

- (id)HTML;
- (void).cxx_destruct;
- (id)init;
- (id)appendStrong:(id)a0;
- (id)appendBreak;
- (id)appendText:(id)a0;
- (id)appendParagraph:(id)a0;
- (id)appendLink:(id)a0 withURL:(id)a1;
- (id)fullHTML;
- (id)encodeHTMLEntities:(id)a0;
- (id)URLEncode:(id)a0;
- (id)appendParagraphText:(id)a0;
- (id)appendHTML:(id)a0;

@end
