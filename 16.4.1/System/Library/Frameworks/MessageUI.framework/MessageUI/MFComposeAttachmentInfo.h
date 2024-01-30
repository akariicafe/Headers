@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo

@property (readonly, nonatomic) BOOL isBasicImage;
@property (readonly, nonatomic) BOOL isDisplayableImage;
@property (readonly, copy, nonatomic) NSString *className;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 filename:(id)a1 isBasicImage:(BOOL)a2 isDisplayableImage:(BOOL)a3 className:(id)a4;

@end
