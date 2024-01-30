@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement

@property (copy) NSString *name;
@property (copy) NSString *align;
@property (copy) NSString *alt;
@property (copy) NSString *border;
@property int height;
@property int hspace;
@property BOOL isMap;
@property (copy) NSString *longDesc;
@property (copy) NSString *src;
@property (copy) NSString *useMap;
@property int vspace;
@property int width;
@property (readonly) BOOL complete;
@property (copy) NSString *lowsrc;
@property (readonly) int naturalHeight;
@property (readonly) int naturalWidth;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly, copy) NSString *altDisplayString;
@property (readonly, copy) NSURL *absoluteImageURL;

- (id)sizes;
- (id)mimeType;
- (id)dataRepresentation:(BOOL)a0;
- (void)setSizes:(id)a0;
- (void)setCrossOrigin:(id)a0;
- (id)crossOrigin;
- (id)currentSrc;
- (void)setSrcset:(id)a0;
- (id)srcset;

@end
