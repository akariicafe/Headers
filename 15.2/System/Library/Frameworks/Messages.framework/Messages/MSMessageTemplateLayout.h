@class NSString, NSData, UIImage, NSURL;

@interface MSMessageTemplateLayout : MSMessageLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *subcaption;
@property (copy, nonatomic) NSString *trailingCaption;
@property (copy, nonatomic) NSString *trailingSubcaption;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaFileURL;
@property (copy, nonatomic) NSString *imageTitle;
@property (copy, nonatomic) NSString *imageSubtitle;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_sanitizedCopy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
