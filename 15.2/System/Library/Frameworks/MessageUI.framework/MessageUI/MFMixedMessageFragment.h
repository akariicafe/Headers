@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}

- (id)baseURL;
- (id)mimeType;
- (id)description;
- (void).cxx_destruct;
- (id)markupString;
- (id)initWithMarkupString:(id)a0 baseURL:(id)a1;
- (id)initWithMarkupData:(id)a0 textEncodingName:(id)a1 baseURL:(id)a2;
- (id)markupData;
- (id)encodingName;

@end
