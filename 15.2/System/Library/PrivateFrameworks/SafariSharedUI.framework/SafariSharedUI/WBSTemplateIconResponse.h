@class UIImage, UIColor;

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *highlightedImage;
@property (readonly, nonatomic) UIColor *themeColor;
@property (readonly, nonatomic, getter=isMonogram) BOOL monogram;

+ (id)responseWithURL:(id)a0 image:(id)a1 highlightedImage:(id)a2 themeColor:(id)a3 isMonogram:(BOOL)a4;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 image:(id)a1 highlightedImage:(id)a2 themeColor:(id)a3 isMonogram:(BOOL)a4;

@end
