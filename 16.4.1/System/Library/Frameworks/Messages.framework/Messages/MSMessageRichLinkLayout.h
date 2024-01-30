@class LPLinkMetadata;

@interface MSMessageRichLinkLayout : MSMessageTemplateLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImage:(id)a0;
- (void)setCaption:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (void)setMediaFileURL:(id)a0;
- (void)setSubcaption:(id)a0;
- (id)initWithLinkMetadata:(id)a0;
- (void)setImageSubtitle:(id)a0;
- (void)setImageTitle:(id)a0;
- (void)setTrailingCaption:(id)a0;
- (void)setTrailingSubcaption:(id)a0;

@end
