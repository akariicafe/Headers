@interface WFContentSniffer : NSObject

+ (id)MIMETypeForData:(id)a0;
+ (id)MIMETypeForString:(id)a0;
+ (BOOL)isJPEG:(id)a0;
+ (id)MIMETypeForData:(id)a0 andString:(id)a1;
+ (BOOL)MIMETypeIsHTMLOrText:(id)a0;
+ (BOOL)isHTML:(id)a0;
+ (BOOL)isWord:(id)a0;
+ (BOOL)isGIF:(id)a0;
+ (BOOL)isOctetStream:(id)a0;
+ (BOOL)isPDF:(id)a0;
+ (BOOL)isPNG:(id)a0;
+ (BOOL)isSWF:(id)a0;
+ (BOOL)isXHTML:(id)a0;
+ (BOOL)isXML:(id)a0;

@end
