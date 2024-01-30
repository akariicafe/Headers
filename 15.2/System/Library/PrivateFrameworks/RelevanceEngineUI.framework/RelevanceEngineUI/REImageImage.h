@class UIImage;

@interface REImageImage : REImage

@property (retain, nonatomic) UIImage *uiImage;

- (id)initWithImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
