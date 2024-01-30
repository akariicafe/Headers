@class UIImage, NSString;

@interface ASCArtwork : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id dataSource;
@property (readonly, nonatomic) UIImage *embeddedImage;
@property (readonly, copy, nonatomic) NSString *URLTemplate;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, copy, nonatomic) NSString *decoration;
@property (readonly, copy, nonatomic) NSString *preferredCrop;
@property (readonly, copy, nonatomic) NSString *preferredFormat;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURLTemplate:(id)a0 width:(double)a1 height:(double)a2 decoration:(id)a3 preferredCrop:(id)a4 preferredFormat:(id)a5;
- (id)makeURLWithSubstitutions:(id)a0;
- (id)initWithImage:(id)a0 decoration:(id)a1;

@end
