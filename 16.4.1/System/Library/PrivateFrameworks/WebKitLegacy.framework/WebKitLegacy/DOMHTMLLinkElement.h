@class NSString, NSURL, DOMStyleSheet;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property BOOL disabled;
@property (copy) NSString *charset;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *media;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (copy) NSString *target;
@property (copy) NSString *type;
@property (readonly) DOMStyleSheet *sheet;
@property (readonly, copy) NSURL *absoluteLinkURL;

- (BOOL)_mediaQueryMatchesForOrientation:(int)a0;
- (void)setCrossOrigin:(id)a0;
- (id)relList;
- (BOOL)_mediaQueryMatches;
- (id)as;
- (id)crossOrigin;
- (void)setAs:(id)a0;

@end
