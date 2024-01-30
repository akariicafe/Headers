@class NSData, NSURL, NSString;

@interface NSSubstituteWebResource : NSObject {
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (id)URL;
- (id)data;
- (void)dealloc;
- (id)MIMEType;
- (id)textEncodingName;
- (Class)_webResourceClass;
- (id)frameName;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id)webResource;

@end
