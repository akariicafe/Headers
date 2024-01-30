@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (copy) NSString *type;
@property (copy) NSString *accessKey;
@property (readonly, copy) NSString *text;
@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *href;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *search;
@property (readonly, copy) NSString *hashName;

- (id)ping;
- (id)download;
- (id)origin;
- (void)setDownload:(id)a0;
- (id)relList;
- (void)setPing:(id)a0;

@end
