@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (id)URL;
- (id)MIMEType;
- (id)data;
- (void)dealloc;
- (Class)_webResourceClass;
- (id)webResource;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id)textEncodingName;
- (id)frameName;

@end
