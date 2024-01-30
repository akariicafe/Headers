@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (id)baseURL;
- (void).cxx_destruct;
- (id)markupData;
- (id)mimeType;
- (id)initWithMarkupString:(id)a0 baseURL:(id)a1;
- (id)initWithMarkupData:(id)a0 textEncodingName:(id)a1 baseURL:(id)a2;
- (id)encodingName;
- (id)description;
- (id)markupString;

@end
